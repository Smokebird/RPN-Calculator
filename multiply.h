//header file for multiplication button

#ifndef MULTIPLYBUTTON
#define MULTIPLYBUTTON

#include<Fl/Fl_Button.H>
#include "utils.h"
#include "stack.h"
#include <iostream>

class multiplyButton : public Fl_Button {
 private:
  Stack *stack;

 public:

 multiplyButton(int X, int Y, int W, int H, char* label, Stack *stack) : Fl_Button(X,Y,W,H, label){
    this->stack = stack;
  }
  static void muCB(Fl_Widget* m, void*){

    multiplyButton *myButton = (multiplyButton *)m;
    myButton->stack->push)myButton->id);

   }
};
#endif
