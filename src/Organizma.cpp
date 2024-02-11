/**
* @file Organizma.cpp
* @description Sistemlerden olusan Organizma sinifi
* @course Veri Yapilari 1B
* @assignment 2
* @date 15 Aralik 2022
* @author Muhammad Najmuddin Farid muhammad.farid@ogr.sakarya.edu.tr
*/
#include "Organizma.hpp"

Organizma::Organizma(Queue **q, int length)
{
    sLength = length / 20 /100;
    sistems = new Sistem *[sLength];
    Organ **organs = new Organ *[length / 20];
    OrganVector *ov = new OrganVector();
    organs[0] = new Organ();
    ov->add(organs[0]);
    sistems[0] = new Sistem(ov);
    for (int i = 1; i < length / 20; i++)
    {
        if (i % 100 == 0)
        {
            ov = new OrganVector();
            sistems[i / 100] = new Sistem(ov);
        }
        organs[i] = new Organ();
        ov->add(organs[i]);
    }
    for (int i = 0; i < length; i++)
    {
        Doku *doku = new Doku(q[i], q[i]->count());
        organs[i / 20]->treeData->Add(doku->center()->data);
    }
}

void Organizma::print() {
    for (int i = 0; i < sLength; i++)
    {
        sistems[i]->printSystem();
    }
}

Organizma::~Organizma() { 
    delete []sistems;
}
