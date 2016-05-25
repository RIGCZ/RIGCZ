/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Polak
 *
 * Created on 24 maja 2016, 19:43
 */

#include <cstdlib>
#include <iostream>
#include "wektory.h"
#include "macierze.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    macierz macierz1;
    macierz macierz2;
    macierz macierz3;
    std::cin >> macierz1;
    std::cin >> macierz2;
//    if(macierz1 == macierz2)
    macierz3 = macierz1 + macierz2;
    std::cout << macierz3;
    return 0;
}

