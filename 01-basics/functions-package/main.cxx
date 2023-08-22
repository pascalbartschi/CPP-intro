//main.cxx
#include <iostream> //"including" input/output stream.
#include <stdio.h> //"including" headers from default library directory
#include "myfunctions.h" // " is to used to denote "local" library.
using namespace std;
int main (){
string inputstring;
cout<<"Enter your name: ";
cin>>inputstring;
sayhelloto(inputstring);
cout<<add(2, 3)<<endl;
cout<<substract(4, 7)<<endl;
return 0;
}
