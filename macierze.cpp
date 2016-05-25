/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "macierze.h"

macierz::macierz()
{
    wektory = new wektor*[2];
    for(int i = 0; i < 2; i++)
    {
        wektory[i] = new wektor(2);
    }
    wiersze = 2;
    kolumny = 2;
}

macierz::macierz(int wier, int kol)
{
    wektory = new wektor*[wier];
    for(int i = 0; i < wier; i++)
    {
        wektory[i] = new wektor(kol);
    }
    wiersze = wier;
    kolumny = kol;
}

macierz::macierz(const macierz& m)
{
    wektory = new wektor*[m.wiersze];
    for(int i = 0; i < m.wiersze; i++)
    {
        wektory[i] = new wektor(m.kolumny);
        wektory[i] = m.wektory[i];
    }
    wiersze = m.wiersze;
    kolumny = m.kolumny;
    std::cout << "kopiuje";
}

macierz::~macierz()
{
//    for(int i = 0; i< wiersze ; i++)
//        delete[] *wektory;
    delete[] wektory;
    std::cout << "Usuwam sie";
}

std::ostream& operator <<(std::ostream& wyjscie, const macierz& m)
{
    for(int i = 0; i < m.wiersze ; i++)
        wyjscie << *(m.wektory)[i] << std::endl;
    return wyjscie;
}

std::istream& operator >>(std::istream& wejscie, const macierz& m)
{
    for(int i = 0; i < m.wiersze ; i++)
        wejscie >> *(m.wektory)[i];
    return wejscie;
}

macierz macierz::operator =(const macierz& m) const
{
    for(int i = 0; i < m.wiersze ; i++)
        *(wektory[i]) = *(m.wektory[i]);
    return *this;
}

macierz macierz::operator +(const macierz& m) const
{
    macierz suma(m.wiersze,m.kolumny);
    for(int i = 0; i < m.wiersze ; i++)
        *suma.wektory[i] = *wektory[i] + *m.wektory[i];
    return suma;
}

macierz macierz::operator -(const macierz& m) const
{
    macierz roznica(m.wiersze,m.kolumny);
    for(int i = 0; i < m.wiersze ; i++)
        *roznica.wektory[i] = *wektory[i] - *m.wektory[i];
    return roznica;
}

bool macierz::operator ==(const macierz& m) const
{
    for(int i = 0; i < m.wiersze ; i++)
    {
        if(*wektory[i] != *m.wektory[i])
            return false;
    }
    return true;
}

bool macierz::operator !=(const macierz& m) const
{
    return !(*this == m);
}