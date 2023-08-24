// main.cxx
#include <iostream>
#include <stdio.h>
#include <vector>
#include "linear_searchers.h"
using namespace std;
int main(int argc, char *argv[]){
  vector<int> vectr = {1, 2, 3, 4, 5, 6 ,7, 8, 8, 10};
  int target = atoi(argv[1]);
  int index = find_element(vectr, target);
  cout << "Index :" << index << endl;
return 0;
}
