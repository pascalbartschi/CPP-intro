//linear.cxx
#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;
int main(int argc,char *argv[]){//Main begins
//Variable declaration
int some_integers[14] = {1,2,3,4,5,6,7,8,9,10,11,12,13,10};
int target = 10;
vector<int> target_index;
for (int i = 0; i < 14; i++){//Linear search begins
if (some_integers[i]==target){//Target found if statement
cout<<"The target is found and it has the index "<<i<<endl;
target_index.push_back(i);
}//Target found if statement ends
}//Linear search ends
//Check to make sure that all of the indices have been saved
for (int i : target_index){//Checking for loop starts
cout<<i<<endl;
}//Checking for loop ends
return 0;
}//Main Ends
