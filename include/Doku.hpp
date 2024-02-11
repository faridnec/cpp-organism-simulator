/**
* @file Doku.hpp
* @description Hucrelerden olusan Doku sinifi
* @course Veri Yapilari 1B
* @assignment 2
* @date 14 Aralik 2022
* @author Muhammad Najmuddin Farid muhammad.farid@ogr.sakarya.edu.tr
*/
#ifndef DOKU_HPP
#define DOKU_HPP

#include "Hucre.hpp"
#include "Queue.hpp"

class Doku
{
private:
    Hucre **hucreler;
    int length = 0;

public:
    Doku();
    Doku(Queue *q, int length);
    Hucre *center();
    ~Doku();
};

#endif