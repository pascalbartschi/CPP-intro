#This is the directory of YOUR source code.
sourcedir=./

# One script
one = one

# Defining compilers
CPP=g++
CC=gcc
NVCC=nvcc

# Lets define systems variable
RM=rm
TIMESTAMP=$(shell date +"%Y_%m_%d_T-%H_%M" )

# When a Makefile is executed, by default it tries the option "all"
all: clean first 

first:
	@echo Compiling $(sourcedir)$(one)
	@$(CPP) -o m_$(one).exe $(sourcedir)$(one).cxx
	@echo Successfully compiled $(sourcedirectory)$(first_part)
	@echo The executable is $(first_part).exe

clean:
	@echo $(TIMESTAMP)
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
