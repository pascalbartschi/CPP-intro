# compiler
CPP = g++

# variables
main = main
component = linear_searchers
# all
all: clear component main

clear:
	$(shell rm *.o *.exe)

component:
	$(CPP) -c $(main).cxx -o $(main).o
	$(CPP) -c $(component).cxx -o $(component).o

main:
	$(CPP) $(main).o $(component).o -o run

