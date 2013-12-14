#ifndef SUBTRACTBUTTON
#define SUBTRACTBUTTON

#include<FL/Fl_Button.H>
#include"utils.h"
#include"stack.h"
#include<cstdlib>

using namespace std;

class SubtractButton : public Fl_Button {
 public:

  Stack *stack;
  float id;
  float op1;
  float op2;

 SubtractButton(int X, int Y, int W, int H, char* label, Stack *stack) : Fl_Button(X,Y,W,H,label){
    this->stack =stack;

  }


void sbCB(Fl_Widget * w, void*){
  SubtractButton *myButton = (SubtractButton *)w;
  myButton->stack->push(myButton->id);
}
};

#endif
