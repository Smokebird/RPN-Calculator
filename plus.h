//header file for plus button

#ifndef PLUSBUTTON
#define PLUSBUTTON

#include<Fl/Fl_Button.H>
#include "utils.h"
#include "stack.h"
#include <iostream>


class plusButton : publlic Fl_Button {
 private:
  Stack *stack;

 public:

 plusButton(int X, int Y, int W, int H, char* label, Stack *stack) : Fl_Button(X,Y,W,H, label){
    this->stack = stack;
  }
  static void plCB(Fl_Widget* p, void*){
    plusButton *myButton = (plusButton *)p;
    myButton->stack->push(myButton->id);
  }
};

#endif
