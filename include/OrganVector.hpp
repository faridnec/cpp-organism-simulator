/**
* @file OrganVector.hpp
* @description Organin bazi uzantili gorevleri
* @course Veri Yapilari 1B
* @assignment 2
* @date 16 Aralik 2022
* @author Muhammad Najmuddin Farid muhammad.farid@ogr.sakarya.edu.tr
*/
#ifndef ORGANVECTOR_HPP
#define ORGANVECTOR_HPP

#include "Organ.hpp"

class OrganVector
{
private:
    Organ **list;
    int cap = 10;
    
public:
    int length = 0;

    OrganVector();
    void add(Organ *d);
    Organ* get(int i);
    void expand();
    ~OrganVector();
};

#endif