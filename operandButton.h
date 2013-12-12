#ifndef OPERANDBUTTON
#define OPERANDBUTTON

#include<FL/Fl_Button>
#include"utils.h"
#include"stack.h"

class OperandButton : public Fl_Button {
 public:
 OperandButton(int X, int  Y, int W, int H, char* label, *Stack stack)  : Fl_Button(X, Y, W, H, label){
    
  }
 private:
  Stack *stack;
  

  
}



#endif
