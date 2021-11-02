#ifndef SUMA_DFRACCIONES_H_INCLUDED
#define SUMA_DFRACCIONES_H_INCLUDED

class SumaDFracciones{
    Fraccion *F_op1;
    Fraccion *F_op2;
    Fraccion *F_rslt;
    public:
        SumaDFracciones(Fraccion *op1,Fraccion *op2, Fraccion *rslt);
        std::string to_string();/** Codifica una cadena en \LaTeX */
        friend std::ostream &operator<<(std::ostream&,SumaDFracciones);
};


#endif // SUMA_DFRACCIONES_H_INCLUDED
