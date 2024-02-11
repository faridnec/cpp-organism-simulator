/**
* @file Queue.hpp
* @description Kuyruk veri yapisi sinifi
* @course Veri Yapilari 1B
* @assignment 2
* @date 12 Aralik 2022
* @author Muhammad Najmuddin Farid muhammad.farid@ogr.sakarya.edu.tr
*/
#ifndef QUEUE_HPP
#define QUEUE_HPP
#include <iostream>
using namespace std;


class Queue{
	private:
		int front;
		int back;
		int capacity;
		int length;
		
		void reserve(int newCapacity);
	public:
		int *items;
		
		Queue();
		void clear();
		int count() const;
		bool isEmpty() const;
		const int& peek();
		void enqueue(const int& item);
		void dequeue();
		~Queue();	
};
#endif