/**
* @file Radix.hpp
* @description Kuyruk veri yapisi uzerinden radix siralama  algoritmasi
* @course Veri Yapilari 1B
* @assignment 2
* @date 12 Aralik 2022
* @author Muhammad Najmuddin Farid muhammad.farid@ogr.sakarya.edu.tr
*/
#ifndef RADIX_HPP
#define RADIX_HPP

#include "Queue.hpp"
#include <cmath>

class Radix{
	private:	
		int* numbers;
		int length;
		Queue **queues;
		int maxStep;
		
		int MaxStepNumber();
		int StepCount(int number);
		int* QueueCurrentLengths();
	public:
		Radix(Queue *q, int length);
		Queue* Sort();
		~Radix();
};

#endif