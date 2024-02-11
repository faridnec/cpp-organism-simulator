/**
* @file Organ.cpp
* @description Dokulerden olusan Organ sinifi
* @course Veri Yapilari 1B
* @assignment 2
* @date 15 Aralik 2022
* @author Muhammad Najmuddin Farid muhammad.farid@ogr.sakarya.edu.tr
*/
#include "Organ.hpp"

Organ::Organ() : treeData(new BST()){};

Organ::Organ(BST *data) : treeData(data){};

Organ::~Organ()
{
    delete treeData;
}