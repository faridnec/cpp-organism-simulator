/**
* @file Sistem.hpp
* @description Organlardan olusan Sistem sinifi
* @course Veri Yapilari 1B
* @assignment 2
* @date 15 Aralik 2022
* @author Muhammad Najmuddin Farid muhammad.farid@ogr.sakarya.edu.tr
*/
#ifndef SISTEM_HPP
#define SISTEM_HPP

#include "OrganVector.hpp"
#include "Organ.hpp"

class Sistem
{
public:
    OrganVector *list;

    Sistem(OrganVector *list);
    void printSystem();
    ~Sistem();
};
#endif