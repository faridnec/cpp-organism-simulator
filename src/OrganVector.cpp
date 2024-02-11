/**
* @file OrganVector.cpp
* @description Organin bazi uzantili gorevleri
* @course Veri Yapilari 1B
* @assignment 2
* @date 16 Aralik 2022
* @author Muhammad Najmuddin Farid muhammad.farid@ogr.sakarya.edu.tr
*/
#include "OrganVector.hpp"

OrganVector::OrganVector() {
    list = new Organ*[cap];
}

void OrganVector::add(Organ *d) {
    if (length == cap) {
        expand();
    }
    list[length++] = d;
}

Organ* OrganVector::get(int i) {
    return list[i];
}

void OrganVector::expand() {
    cap = cap + 50;
    Organ **tmp = new Organ*[cap];
    for(int j=0;j<length;j++) tmp[j]= list[j];
    if(list != NULL) delete [] list;
    list = tmp;
}

OrganVector::~OrganVector() {
    delete []list;
}