#include <iostream>
#include <stdio.h>
using namespace std;
#include "CDummy.h"

extern int dummy_int;
//int CDummy::dummy_int;
int CDummy::dummy_int = 0;

void dummy_func();
void view_global_and_struct_vars();
int main() {
  dummy_int = 200;
  dummy_func();
  //CDummy::dummy_int = 300;
  CDummy::dummy_func();
  CDummy CD;            /* CONSTRUCTOR POR DEFECTO*/
  #if 0
  std::cout << "CDummy::dummy_int = " << CDummy::dummy_int << "\n";
  std::cout << "dummy_int = " << dummy_int << "\n";
  #else
   view_global_and_struct_vars();
  #endif
  CDummy cd;
    view_global_and_struct_vars();
  return 0;
}
