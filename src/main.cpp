/**
* @file main.cpp
* @description organizma ekrana cikartilmasi
* @course Veri Yapilari 1B
* @assignment 2
* @date 5 Kasim 2022
* @author Muhammad Najmuddin Farid muhammad.farid@ogr.sakarya.edu.tr
*/
#include "Organizma.hpp"

int main()
{
	int linesLength = 0;
	Queue **q = read("Veri.txt", linesLength);
	Organizma *o = new Organizma(q, linesLength);
	o->print();
	return 0;
}