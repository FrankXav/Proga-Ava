#include <class/Fraccion.h>
#include <vector>
#include <class/Suma_DFracciones.h>
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
 Fraccion *Fop2 = new Fraccion(1,2);
 Fraccion *F_r = new Fraccion(1,2);
 SumaDFracciones S(Fop1,Fop2, F_r);
 std::cout << S << "\n";
return 0;
}
