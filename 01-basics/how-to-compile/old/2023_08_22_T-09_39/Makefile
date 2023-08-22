#This is the directory of YOUR source code.
sourcedir=./

# Script variables
one = one
two = two
three = three
final = final

# Defining compilers
CPP=g++
CC=gcc
NVCC=nvcc

# Lets define systems variable
RM=rm
TIMESTAMP=$(shell date +"%Y_%m_%d_T-%H_%M" )

# When a Makefile is executed, by default it tries the option "all"
all: clean first second three

first:
	@echo Compiling $(sourcedir)$(one).cxx
	@$(CPP) -o m_$(one).exe $(sourcedir)$(one).cxx
	@echo Successfully compiled $(sourcedir)$(one).cxx
	@echo The executable is $(one).exe

second: 
	@echo Compiling $(sourcedir)$(two) to partially compiled object
	@$(CPP) -c $(two).cxx -o $(two).o

three: 
	@echo Compiling $(three) together with $(two) to compiled $(final).exe
	@$(CPP) -c $(three).cxx -o $(three).o
	@$(CPP) $(two).o $(three).o -o $(final).exe
	@echo Successfully compiled $(sourcedir)$(two) and $(sourcedir)$(three) to executable $(final).exe
	

clean:
	echo $(TIMESTAMP)
	@echo "Making old/$(TIMESTAMP) directory"
	$(shell mkdir -p old/$(TIMESTAMP) )
	@echo "Copying the source to the old directory"
	$(shell cp -r $(sourcedirectory)/*.h old/$(TIMESTAMP) )
	$(shell cp -r $(sourcedirectory)/*.cxx old/$(TIMESTAMP) )
	@echo "Moving all .exe to the old directory"
	$(shell mv *.exe old/$(TIMESTAMP) )
	$(shell mv *.o old/$(TIMESTAMP) )
	@echo "Copying the Makefile to the old directory"
	$(shell cp Makefile old/$(TIMESTAMP) )	
