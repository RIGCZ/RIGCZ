/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   wektory.h
 * Author: Polak
 *
 * Created on 24 maja 2016, 19:44
 */
#include <iostream>

#ifndef WEKTORY_H
#define WEKTORY_H

class wektor
{
    int* wspolrzedne;
    int rozmiar;
public:
    wektor();
    wektor(int);
    wektor(const wektor&);
    ~wektor();
    
    friend std::ostream& operator <<(std::ostream& wyjscie, const wektor& v);
    friend std::istream& operator >>(std::istream& wejscie, const wektor& v);
    wektor operator+(const wektor&);
    wektor operator-(const wektor&);
    wektor operator*(int);
    wektor operator-=(const wektor&);
    wektor operator+=(const wektor&);
    wektor operator=(const wektor&);
    bool operator==(const wektor&);
    bool operator!=(const wektor&);
    int operator [](const int);
//    friend class macierz;
};


#endif /* WEKTORY_H */

