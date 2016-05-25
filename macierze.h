/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   macierze.h
 * Author: Polak
 *
 * Created on 24 maja 2016, 21:24
 */
#include "wektory.h"
#include <iostream>
#ifndef MACIERZE_H
#define MACIERZE_H

class macierz
{
    wektor** wektory;
    int wiersze, kolumny;
public:
    macierz();
    macierz(int, int);
    macierz(const macierz&);
    ~macierz();
    
    friend std::ostream& operator <<(std::ostream& wyjscie, const macierz& m);
    friend std::istream& operator >>(std::istream& wejscie, const macierz& m);
    macierz operator =(const macierz&) const;
    macierz operator +(const macierz&) const;
    macierz operator -(const macierz&) const;
    bool operator ==(const macierz&) const;
    bool operator !=(const macierz&) const;
//    macierz operator *(const macierz&) const;
};


#endif /* MACIERZE_H */

