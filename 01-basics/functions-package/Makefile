# compiler
CPP = g++

# variables

# all
all: clear component main

clear:
	$(shell rm *.o *.exe)

component:
	$(CPP) -c main.cxx -o main.o
	$(CPP) -c myfunctions.cxx -o myfunctions.o

main:
	$(CPP) main.o myfunctions.o -o final.exe

