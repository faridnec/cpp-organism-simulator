/**
* @file Kontrol.hpp
* @description Dosya okuma ve satir saydirma
* @course Veri Yapilari 1B
* @assignment 2
* @date 14 Aralik 2022
* @author Muhammad Najmuddin Farid muhammad.farid@ogr.sakarya.edu.tr
*/
#ifndef KONTROL_HPP
#define KONTROL_HPP

#include "Queue.hpp"
#include "Radix.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int lineCount(string path);
Queue **read(string path, int &length);

#endif