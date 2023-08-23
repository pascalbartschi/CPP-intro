// main.cxx
#include <iostream>
#include <stdio.h>
#include "linear_searchers.h"
using namespace std;
int main(int argc, char *argv[]){
  int array[] = atoi(argv[1]);
  int target[] = atoi(argv[2]);
  int index = find_element(array, target);
  cout << "Index :" << index << endl;
return 0;
}
