//two.cxx
#include <iostream> //"including" input/output stream.
#include <stdio.h> //"including" headers from default library directory
#include "three.h" //This time, you are including a local package called,→ "three.h"
using namespace std; //using standard namespace, otherwise every instances → of command such as cout need the prefix std:cout or std:endl.
int main (){ //Beginning of the function "integer" main
string name="You";
cout<<"Hello "<<name<<endl;
greet(name);
return 0;
}

