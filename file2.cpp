#include <iostream>
#include <stdio.h>
#include <limits.h>
using namespace std;
#include "CDummy.h"

int dummy_int;

void dummy_func() {
#if 0
  printf("Variable dummy_int = %d\n",dummy_int);
#endif // 0
  cout << "Variable CDummy::dummy_int = " << CDummy::dummy_int << "\n";
}

void view_global_and_struct_vars(){
    std::cout << "CDummy::dummy_int = " << CDummy::dummy_int << "\n";
    std::cout << "dummy_int = " << dummy_int << "\n";
}
