/**
* @file Kontrol.cpp
* @description Dosya okuma ve satir saydirma
* @course Veri Yapilari 1B
* @assignment 2
* @date 14 Aralik 2022
* @author Muhammad Najmuddin Farid muhammad.farid@ogr.sakarya.edu.tr
*/
#include "Kontrol.hpp"

int lineCount(string path)
{
    int counter = 0;
    ifstream file(path);
    string unused;
    while (getline(file, unused))
        ++counter;

    file.close();
    return counter;
}

Queue **read(string path, int &length)
{
    ifstream file;
    file.open(path);
    string line;

    if (!file.is_open())
    {
        cout << "File was not found" << endl;
        cout << "Please make sure the " << path << " file is in the same directory as the makefile" << endl;
    }

    length = lineCount(path);
    Queue **result = new Queue *[length];
    int i = 0;
    
    while (getline(file, line))
    {
        istringstream ss(line);
        string data;

        if (line.empty())
            continue; // incase empty line was found it will jump to the next line
        Queue *q = new Queue();
        while (ss >> data)
        {
            q->enqueue(stoi(data));
        }
        Radix *r = new Radix(q, q->count());
        result[i++] = r->Sort();
    }
    file.close();
    return result;
}