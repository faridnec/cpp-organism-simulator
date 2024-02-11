/**
* @file Organizma.hpp
* @description Sistemlerden olusan Organizma sinifi
* @course Veri Yapilari 1B
* @assignment 2
* @date 15 Aralik 2022
* @author Muhammad Najmuddin Farid muhammad.farid@ogr.sakarya.edu.tr
*/
#ifndef ORGANIZMA_HPP
#define ORGANIZMA_HPP

#include "Sistem.hpp"
#include "Kontrol.hpp"
#include "Doku.hpp"

class Organizma
{
public:
    Sistem **sistems;
    int sLength;

    Organizma(Queue **q, int length);

    void print();

    ~Organizma();
};

#endif