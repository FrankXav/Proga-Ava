#include <cmath>
#include <class/Fraccion.h>
//#include <class/EquivDFraciones.h>
#include <class/Suma_DFracciones.h>


SumaDFracciones::SumaDFracciones(Fraccion *op1,Fraccion *op2,Fraccion *rslt)
:F_op1(op1),F_op2(op2),F_rslt(rslt)
{/**Deliberadamente vacio*/}

/**Stub*/
std::ostream &operator<<(std::ostream& out,SumaDFracciones SdFrhs){
    out << "Suma de Fracciones";
    return out;
}
std::string SumaDFracciones::to_string(){
    char str[256];
    *F_rslt = (*F_op1) + (*F_op2);
    if ((F_rslt->signo()) == '+'){
        sprintf(str,"\\frac{%d}{%d}+\\frac{%d}{%d}=\
\\frac{%d}{%d}",
           F_op1->n,F_op1->d,
           F_op2->N,F_op2->D,
           abs(F_rslt->n),abs(F_rslt->d)
           );
    }
    return std::string(str);
}
