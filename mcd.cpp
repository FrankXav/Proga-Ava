#include <cmath>
#include <Fraccion.h>
#if 0 /*con 0 ahora mcd es un metodo*/
unsigned int MCD(int n,int d)
#endif // 0
unsigned int Fraccion::MCD(int n,int d)
{
  unsigned int N,D,aux;
  N=abs(n);
  D=abs(d);
  if(N<D){
   aux=N;
   N=D;
   D=aux;
  }
  while((aux=N%D)!=0){/*Algoritmo de Euclides*/
   N=D;
   D=aux;
  }
  return D;
}
