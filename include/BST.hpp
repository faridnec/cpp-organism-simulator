/**
* @file BST.hpp
* @description agac sinif yapisi
* @course Veri Yapilari 1B
* @assignment 2
* @date 12 Aralik 2022
* @author Muhammad Najmuddin Farid muhammad.farid@ogr.sakarya.edu.tr
*/
#ifndef BST_HPP
#define BST_HPP

#include <iostream>
#include <cmath>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(const int &dt, Node *lf = NULL, Node *rg = NULL)
    {
        data = dt;
        left = lf;
        right = rg;
    }
};

class BST
{
private:
    Node *root;

    void SearchAndAdd(Node *&subNode, const int &newItem);
    bool SearchAndDelete(Node *&subNode, const int &data);
    bool DeleteNode(Node *&subNode);
    void postorder(Node *subNode);
    int Height(Node *subNode);
    bool isBalanced(Node *root);
    void PrintLevel(Node *subNode, int level);
    bool Search(Node *subNode, const int &item);

public:
    BST();
    bool isEmpty() const;
    void Add(const int &newItem);
    void Delete(const int &data);
    void postorder();
    int Height();
    bool isBalanced();
    bool Search(const int &item);
    void Clear();
    ~BST();
};

#endif