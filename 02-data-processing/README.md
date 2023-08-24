## What I learned in this section

The main focus of this section was to implement algorithms for simple data processing such as linear search, ...

### Include error

```c++
g++ -c main.cxx -o main.o
main.cxx:5:1: error: expected initializer before ‘using’
 using namespace std;
 ^~~~~
```

-> this error arises because I forgot the semicolon on the last line of the header file


