#ifndef FRACCION1_H_INCLUDED
#define FRACCION1_H_INCLUDED
#include <iostream>
#include <cmath>
/*stub*/
unsigned int mcd(unsigned int Num, unsigned int Den)
    __attribute__ ((weak));

typedef struct Fraccion{
    int n;  /**numerdaor**/
    int d;  /**denominador**/
    unsigned int N; /**Valor absoluto n*/
    unsigned int D; /**valor absoluto d*/
    Fraccion(int num, int den);
    Fraccion();
    Fraccion operator+(Fraccion rhs);

    void simplificar();
} Fraccion;
std::ostream& operator<<(std::ostream&,Fraccion rhs);


#endif // FRACCION1_H_INCLUDED
