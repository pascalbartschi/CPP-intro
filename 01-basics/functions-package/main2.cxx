//main22.cxx
#include <iostream> //"including" input/output stream.
#include <stdio.h> //"including" headers from default library directory
#include "myfunctions.h" // " is to used to denote "local" library.
using namespace std;
int main (){
float inputf;
cout << "Enter float: ";
cin >> inputf;
bool greater = half(inputf);
if (greater){
cout << inputf << " is greater than 0.5." << endl;
} else
cout << inputf << " is smaller than 0.5." << endl;
return 0;
}
