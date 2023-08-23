// main.cxx
#include <iostream>
#include <stdio.h>
#include "linear_searchers.h"
using namespace std;
int main(int argc, char *argv[]){
  int lower = atoi(argv[1]);
  int upper = atoi(argv[2]);
  int no = random_no(lower, upper);
  cout << "Number :" << no << endl;
return 0;
}
