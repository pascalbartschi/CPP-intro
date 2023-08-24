# compiler
CPP = g++

# variables
file1 = file_export
file2 = file_import
component = linear_searchers
# all
all: clear main

clear:
	$(shell rm *.o *.exe)

main:
	$(CPP) $(file1).cxx -o $(file1).exe
	$(CPP) $(file2).cxx -o $(file2).exe

