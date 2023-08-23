// rand_minmax.cxx
#include<iostream>
#include<stdio.h>
#include<vector>
#include"linear_searchers.h"
using namespace std;
// this function generates a random inter within given bounds
int random_no(int lower, int upper)
{
  int rand_no = lower - 1;
    while ((rand_no > upper) || (rand_no < lower)){
      int sign = 1;
      if (rand() % 2 == 0){
	sign = -1;
      }
      rand_no = sign * rand();
    }
    return rand_no;
}
  
int find_element(int array[], int target){
  int length = sizeof(array) / sizeof(array[0]);

  for (int i = 0; i < length; i++){
    if (array[i] == target){
      return i;
    }
  }
}
