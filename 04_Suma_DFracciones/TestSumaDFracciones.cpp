#include <iostream>
#include <vector>
#include <class/EquivDFraciones.h>
#include <class/Suma_DFracciones.h>
#include <class/Fraccion.h>
#include <common.h>

std::vector<std::string> gifFile;

int main(){
 std::string imgFileName;
 imgFileName="file00.gif";
 create_gif(imgFileName,
            "\\mbox{Suma de Fracciones}");
 gifFile.push_back(imgFileName);
 Fraccion *Fop1 = new Fraccion(1,2);
 Fraccion *Fop2 = new Fraccion(1,4);
 //Fraccion *F_r = new Fraccion(1,1);
 #if 0
 Fraccion Result = *Fop1 + *Fop2;
 #else
 //Fraccion Result(1,1);
 Fraccion *Result = new Fraccion((*Fop1 + *Fop2));
 #endif
 //Fop1->simplificar();
 std::cout << *Fop1 << std::endl;

 std::cout << *Result << std::endl;
 //Result->simplificar();
#if 1
 EquivDFracciones EdF(Result);

 std::string EdF_to_string = EdF.to_string();
 std::cout << "\n" << EdF_to_string << "\n";

 SumaDFracciones S(Fop1,Fop2,Result);
 std::cout << S << "\n";

 imgFileName="file01.gif";
 std::string S_to_string = S.to_string();
 std::cout << "\n" << S_to_string << "\n";
 #if 1 //2021.10.26
 create_gif(imgFileName,S.to_string());
 gifFile.push_back(imgFileName);

 imgFileName="file02.gif";
 create_gif(imgFileName,EdF.to_string());
 gifFile.push_back(imgFileName);

 Fraccion f1(3,5),f2(2,7);
 Fraccion f3 = f1 + f2;
 SumaDFracciones f1plusf2(&f1,&f2,&f3);
 imgFileName="file03.gif";
 create_gif(imgFileName,f1plusf2.to_string());
 gifFile.push_back(imgFileName);

 display_gui(gifFile,40,30);
 #endif
#endif
 return 0;
}/*end main()*/
