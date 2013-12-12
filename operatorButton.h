//header file for operatorButton

#ifndef OPERATORBUTTON
#define OPERATORBUTTON

#include <FL/Fl_Button>
#include "utils.h"
#include "stack.h"
#include <iostream>
#include <string>

class operatorButton : public Fl_Button {
private:
  Stack *stack;
  float op1;
  float op2;


public:
 operatorButton(int X, intY, int W, int H, char* label, *Stack stack) : Fl_Button(X,Y,W,H,label){
    this->stack stack;
  }
};

#endif
