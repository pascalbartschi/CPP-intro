## What I learned in this section

This directory holds my first experience with C++, where I learn how to run basic programms, the syntax and basic tools of this programming language. I take notes here of what I learned when I later return to this repo.

### how-to-compile:
* main-file: calls all function and imports the header
* header-file: tells main that functions are defined somewhere but not yet compiled
* cxx-files: contain functions
  - first compiled to object: g++ file.cxx -o file.o
  - then compiled with main to script: g++ file.o main.o -o executable.exe
* make-file: organizes compilation of files in right order, removes old files, we can echo certain steps to the console there

### function-package
* data types:
	- all variables must be declared with their data type, as well as functions with the type they return, e.g., int add(int one, int two, in case a function returns nothing its void func(...)
	- arrays: cannot change sizes, e.g. array[] = {1,2,3} has size three ( we don't need to write three inside [3]), indexing as in python, get length by sizeof(array) / sizeof(array[0]
	- vector: can change their sizes, e.g vector<int> vector = {1, 2, 3, 4, 5};
		- cout<<vector[3]<<endl; //will return fourth element, 4
		- method to add element at end: vector.push_back(6), more [method here](https://cplusplus.com/reference/vector/vector/)
* if-statements:
	- logical operators like known from R(=, !, &&, ||) and math comparison like in python (==, !=, <, >, >=)
	- e.g. if( (1+2 == 3) && (true=true) ) {..} else{...} (newlines after curly brackets)
* syntax-notes:
	- semicolon after every line except last
	- syntax of cout<<add(1, 2)<<endl;
	- syntac of cin>>string name;
