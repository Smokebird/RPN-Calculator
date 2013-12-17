ARCH = $(shell uname)

ifeq ($(ARCH),Darwin)
	CXX	 = g++
	LINK     = g++
else
	CXX	 = g++
	LINK     = g++-4.8
endif

DEBUG    = -g
CXXFLAGS = $(shell fltk-config --cxxflags ) -std=c++0x -I. # -I include from dirs
LDFLAGS  = $(shell fltk-config --ldflags )
LDSTATIC = $(shell fltk-config --ldstaticflags )
OBJS =   stack.o operandButton.o #utils.o put operandButton.o back in
HEADER = operatorButton.h operandButton.h enterButton.h subtractButton.h plus.h divide.h multiply.h sqrRoot.h


FLTK = -lfltk


ALL = rpnTester

.SUFFIXES: .o .cpp
%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(DEBUG) -c $<

rpnTester:	rpnTester.cpp $(OBJS) $(HEADER)




	$(CXX) $(CXXFLAGS) rpnTester.cpp $(FLTK) $(LDFLAGS) $(OBJS)  -o rpnTester





clean: 
	rm -f *.o 2> /dev/null
	rm -f ibutton animals

