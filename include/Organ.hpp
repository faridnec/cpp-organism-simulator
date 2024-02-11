/**
* @file Organ.hpp
* @description Dokulerden olusan Organ sinifi
* @course Veri Yapilari 1B
* @assignment 2
* @date 15 Aralik 2022
* @author Muhammad Najmuddin Farid muhammad.farid@ogr.sakarya.edu.tr
*/
#ifndef ORGAN_HPP
#define ORGAN_HPP

#include "BST.hpp"

class Organ
{
public:
    BST *treeData;
    Organ();
    Organ(BST *data);
    ~Organ();
};

#endif