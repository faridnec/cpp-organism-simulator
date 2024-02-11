/**
* @file BST.cpp
* @description agac sinif yapisi
* @course Veri Yapilari 1B
* @assignment 2
* @date 12 Aralik 2022
* @author Muhammad Najmuddin Farid muhammad.farid@ogr.sakarya.edu.tr
*/
#include "BST.hpp"

void BST::SearchAndAdd(Node *&subNode, const int &newItem)
{
    if (subNode == NULL)
        subNode = new Node(newItem);
    else if (newItem < subNode->data)
        SearchAndAdd(subNode->left, newItem);
    else if (newItem > subNode->data)
        SearchAndAdd(subNode->right, newItem);
    else
        return;
}
bool BST::SearchAndDelete(Node *&subNode, const int &data)
{
    if (subNode == NULL)
        return false;
    if (subNode->data == data)
        return DeleteNode(subNode);
    else if (data < subNode->data)
        return SearchAndDelete(subNode->left, data);
    else
        return SearchAndDelete(subNode->right, data);
}
bool BST::DeleteNode(Node *&subNode)
{
    Node *DelNode = subNode;

    if (subNode->right == NULL)
        subNode = subNode->left;
    else if (subNode->left == NULL)
        subNode = subNode->right;
    else
    {
        DelNode = subNode->left;
        Node *parent = subNode;
        while (DelNode->right != NULL)
        {
            parent = DelNode;
            DelNode = DelNode->right;
        }
        subNode->data = DelNode->data;
        if (parent == subNode)
            subNode->left = DelNode->left;
        else
            parent->right = DelNode->left;
    }
    delete DelNode;
    return true;
}
void BST::postorder(Node *subNode)
{
    if (subNode != NULL)
    {
        postorder(subNode->left);
        postorder(subNode->right);
        cout << subNode->data << " ";
    }
}
int BST::Height(Node *subNode)
{
    if (subNode == NULL)
        return -1;
    return 1 + max(Height(subNode->left), Height(subNode->right));
}
bool BST::isBalanced(Node *root)
{
    int lh;
    int rh;

    if (root == NULL)
        return 1;

    lh = Height(root->left);
    rh = Height(root->right);

    if (abs(lh - rh) <= 1 && isBalanced(root->left) && isBalanced(root->right))
        return 1;

    return 0;
}
void BST::PrintLevel(Node *subNode, int level)
{
    if (subNode == NULL)
        return;
    if (level == 0)
        cout << subNode->data << " ";
    else
    {
        PrintLevel(subNode->left, level - 1);
        PrintLevel(subNode->right, level - 1);
    }
}
bool BST::Search(Node *subNode, const int &item)
{
    if (subNode == NULL)
        return false;
    if (subNode->data == item)
        return true;
    if (item < subNode->data)
        return Search(subNode->left, item);
    else
        return Search(subNode->right, item);
}

BST::BST()
{
    root = NULL;
}
bool BST::isEmpty() const
{
    return root == NULL;
}
void BST::Add(const int &newItem)
{
    SearchAndAdd(root, newItem);
}
void BST::Delete(const int &data)
{
    if (SearchAndDelete(root, data) == false)
        throw "Item not found.";
}
void BST::postorder()
{
    postorder(root);
}
int BST::Height()
{
    return Height(root);
}
bool BST::isBalanced()
{
    return isBalanced(root);
}
bool BST::Search(const int &item)
{
    return Search(root, item);
}
void BST::Clear()
{
    while (!isEmpty())
        DeleteNode(root);
}
BST::~BST()
{
    Clear();
}