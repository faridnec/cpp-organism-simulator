/**
* @file Doku.cpp
* @description Hucrelerden olusan Doku sinifi
* @course Veri Yapilari 1B
* @assignment 2
* @date 14 Aralik 2022
* @author Muhammad Najmuddin Farid muhammad.farid@ogr.sakarya.edu.tr
*/
#include "Doku.hpp"

Doku::Doku() : hucreler(new Hucre *()){};
Doku::Doku(Queue *q, int length)
{
    this->length = length;
    hucreler = new Hucre *[length];
    for (int i = 0; i < length; i++)
    {
        hucreler[i] = new Hucre(q->items[i]);
    }
};

Hucre* Doku::center()
{   //median of the tissue
    return hucreler[length / 2];
}

Doku::~Doku()
{
    delete[] hucreler;
}