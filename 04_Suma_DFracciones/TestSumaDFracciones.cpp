#include <class/Fraccion.h>
#include <vector>
#include <class/Suma_DFracciones.h>
#include <class/EquivDFraciones.h>
#include <common.h>
#include <iostream>

std::vector<std::string> gifFile;

int main(){
 std::string imgFileName;
 imgFileName="file00.gif";
 create_gif(imgFileName,
            //"\\mbox{FRACCIONES EQUIVALENTES}");
            "\\mbox{Fracciones Equivalentes}");
 gifFile.push_back(imgFileName);
 Fraccion *Fop1 = new Fraccion(1,2);
 Fraccion *Fop2 = new Fraccion(1,4);
 Fraccion Result = *Fop1 + *Fop2;
 SumaDFracciones S(Fop1,Fop2,&Result);
 std::cout << S << "\n";
return 0;
}
