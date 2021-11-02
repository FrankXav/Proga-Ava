#include <iostream>
#include <Fraccion1.h>
using namespace std;


int main (){
    Fraccion F1(1,2);
    Fraccion F2(1,4);
    Fraccion F3=F1+F2;
    cout<<F1.n<<"/"<<F1.d<<" + "
        <<F2.n<<"/"<<F2.d<<" = "
        <<F3.n<<"/"<<F3.d<<endl;

    Fraccion arr_F[3];
    arr_F[0]=F1;
    arr_F[1]=F2;
    arr_F[2]=arr_F[0] + arr_F[1];
    cout<<arr_F[0].n<<"/"<<arr_F[0].d<<" + "
        <<arr_F[1].n<<"/"<<arr_F[1].d<<" = "
        <<arr_F[2].n<<"/"<<arr_F[2].d<<endl;

    return 0;
}
