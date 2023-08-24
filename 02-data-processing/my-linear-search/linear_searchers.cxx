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
  
int find_element(vector<int> vectr, int target){
  int c = 0;
  for (int ele : vectr){
    c++;
    if (ele == target){
      return c; 
 	} 
    }
}

float find_max(vector<float> vectr){
  float maximum = -999999;
  for (float ele : vectr){
    if (ele > maximum){
      maximum = ele;
    }
  }
  return maximum;
}

float find_min(vector<float> vectr){
  float minimum = 999999;
  for (float ele : vectr){
    if (ele < minimum){
      minimum = ele;
    }
  }
}

    

void checker(int check){
  cout << check << endl;
}

	 
