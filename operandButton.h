#ifndef OPERANDBUTTON
#define OPERANDBUTTON

#include<FL/Fl_Button.H>
#include"utils.h"
#include"stack.h"

class OperandButton : public Fl_Button {
private:
  Stack *stack;
  float id;
public:
 OperandButton(int X, int  Y, int W, int H, char* label, Stack *stack)  : Fl_Button(X, Y, W, H, label){
    this->stack = stack;  
    int temp = ATOI(label);
    this->id = temp;
  }
  // static void opCB(Fl_Widget, void); got errors that i do not undertand
  

  
  };



#endif
