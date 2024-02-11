/**
* @file Sistem.cpp
* @description Organlardan olusan Sistem sinifi
* @course Veri Yapilari 1B
* @assignment 2
* @date 15 Aralik 2022
* @author Muhammad Najmuddin Farid muhammad.farid@ogr.sakarya.edu.tr
*/
#include "Sistem.hpp"

Sistem::Sistem(OrganVector *list): list(list) {};

void Sistem::printSystem() {
    for (int i = 0; i < list->length ;i++) {
        if (list->get(i)->treeData->isBalanced()) {
            cout << " ";
        } else {
            cout << "#";
        }
    }
    cout << endl;
}

Sistem::~Sistem() {
    delete list;
}