#include <cmath>
#include <class/Fraccion.h>
#include <class/ComparacionDFracciones.h>
/**Stub*/
ComparacionDFracciones::ComparacionDFracciones(Fraccion *op1,
                                               Fraccion *op2)
#if 0
:F_op1(op1),F_op2(op2),rel('>')
#else
:F_op1(op1),F_op2(op2)
#endif
{
    if(*F_op1 > *F_op2){
        rel='>';

    }else if (*F_op1 == *F_op2){
        rel = '=';
    }
    else{
        rel = '<';
    }
}

/**Stub*/
std::string ComparacionDFracciones::to_string()
{
 char str[256];
 char r = '?';
 if ((get_rel())=='>') {
      r= '>';
  }else if((get_rel())=='='){
      r = '=';
  }else{
      r = '<';
  }
  sprintf(str,"\\frac{%d}{%d}{%c}\\frac{%d}{%d}",
           F_op1->n,F_op1->d,
           r,
           F_op2->n,F_op2->d);
  return std::string(str);
}

char ComparacionDFracciones::get_rel()
{
 return rel;
}
