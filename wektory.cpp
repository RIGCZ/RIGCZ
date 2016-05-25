/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "wektory.h"

wektor::wektor()
{
    wspolrzedne = new int[2];
    for(int i = 0; i < 2; i++)
        wspolrzedne[i] = 0;
    rozmiar = 2;
}

wektor::wektor(int b)
{
    wspolrzedne = new int[b];
    for(int i = 0; i < b ; i++)
        wspolrzedne[i] = 0;
    rozmiar = b;
}

wektor::wektor(const wektor& v)
{
    wspolrzedne = new int[v.rozmiar];
    for(int i=0; i < v.rozmiar; i++)
        wspolrzedne[i] = v.wspolrzedne[i];
    rozmiar = v.rozmiar;
}

wektor::~wektor()
{
    delete[] wspolrzedne;
    rozmiar = 0;
//    std::cout << "wektor usuwany";
}

std::ostream & operator <<(std::ostream & wyjscie, const wektor & v )
{
    for(int i = 0; i < v.rozmiar ; i++)
        wyjscie << v.wspolrzedne[i]<<" ";
    return wyjscie;
}

std::istream & operator >>(std::istream & wejscie, const wektor & v)
{
    for(int i = 0; i < v.rozmiar ; i++)
        wejscie >> v.wspolrzedne[i];
    return wejscie;
}

wektor wektor::operator +(const wektor& v)
{
    wektor suma(rozmiar);
    for(int i = 0; i < rozmiar ; i++)
        suma.wspolrzedne[i] = wspolrzedne[i] + v.wspolrzedne[i];
    return suma;
}

wektor wektor::operator -(const wektor& v)
{
    wektor roznica(rozmiar);
    for(int i = 0; i < rozmiar ; i++)
        roznica.wspolrzedne[i] = wspolrzedne[i] - v.wspolrzedne[i];
    return roznica;
}

wektor wektor::operator *(int d)
{
    wektor iloczyn(rozmiar);
    for(int i = 0; i < rozmiar ; i++)
        iloczyn.wspolrzedne[i] = wspolrzedne[i] * d;
    return iloczyn;
}

wektor wektor::operator -=(const wektor& v)
{
    for(int i = 0; i < rozmiar ; i++)
        wspolrzedne[i] -= v.wspolrzedne[i];
    return *this;
}

wektor wektor::operator +=(const wektor& v)
{
    for(int i = 0; i < rozmiar ; i++)
        wspolrzedne[i] += v.wspolrzedne[i];
    return *this;
}

wektor wektor::operator =(const wektor& v)
{
    for(int i = 0; i < rozmiar ; i++)
        wspolrzedne[i] = v.wspolrzedne[i];
    return *this;
}

bool wektor::operator ==(const wektor& v)
{
    for(int i = 0; i < rozmiar; i++)
    {
        if(wspolrzedne[i] != v.wspolrzedne[i])
            return false;
    }
    return true;
}

bool wektor::operator !=(const wektor& v)
{
    return !(*this == v);
}

int wektor::operator [](const int d)
{
    if(0 < d < rozmiar)
        return wspolrzedne[d];
    else
        throw "Rak";
}