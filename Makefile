ARCH = $(shell uname)

ifeq ($(ARCH),Darwin)
	CXX	 = g++
	LINK     = g++
else
	CXX	 = g++
	LINK     = g++-4.8
endif

DEBUG    = -g
CXXFLAGS = $(shell fltk-config --cxxflags ) -std=c++11 -I. # -I include from dirs
LDFLAGS  = $(shell fltk-config --ldflags )
LDSTATIC = $(shell fltk-config --ldstaticflags )
OBJS = operatorButton.h  stack.o #utils.o put operandButton.o back in
FLTK = -lfltk


ALL = rpnTester

.SUFFIXES: .o .cpp
%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(DEBUG) -c $<
rpnTester:	rpnTester.cpp $(OBJS)
	$(CXX) $(CXXFLAGS) rpnTester.cpp $(LDFLAGS) $(OBJS) -o rpnTester




clean: 
	rm -f *.o 2> /dev/null
	rm -f ibutton animals

