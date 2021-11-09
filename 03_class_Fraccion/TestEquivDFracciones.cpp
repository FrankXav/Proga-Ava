#include <iostream>
#include <vector>
#include <class/EquivDFraciones.h>
#include <class/Fraccion.h>
#include <common.h>
#include <stdlib.h>
#include <stdio.h>

std::vector<std::string> gifFile;

int main(){
 std::string imgFileName;
 imgFileName="file00.gif";
 create_gif(imgFileName,
            //"\\mbox{FRACCIONES EQUIVALENTES}");
            "\\mbox{Fracciones Equivalentes}");
 gifFile.push_back(imgFileName);
 //printf("crea gif\n");
#if 1
 Fraccion F(112,324);
 EquivDFracciones EdF(&F);
 imgFileName="file01.gif";
 create_gif(imgFileName,EdF.to_string());
 gifFile.push_back(imgFileName);
 display_gui(gifFile,40,30);
#else
 Fraccion F(112,-324);
 EquivDFracciones EdF(&F);
 imgFileName="file01.gif";
 create_gif(imgFileName,EdF.to_string());
 gifFile.push_back(imgFileName);
 display_gui(gifFile,40,30);
#endif
 return 0;
}/*end main()*/
