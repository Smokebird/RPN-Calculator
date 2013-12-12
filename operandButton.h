#ifndef OPERANDBUTTON
#define OPERANDBUTTON

#include<FL/Fl_Button>
#include"utils.h"
#include"stack.h"

class OperandButton : public Fl_Button {
private:
  Stack *stack;
  int id;
public:
 OperandButton(int X, int  Y, int W, int H, char* label, *Stack stack)  : Fl_Button(X, Y, W, H, label){
    this->stack = stack;  
    this->id = ATOI(label)
  }
  static void opCB(Fl_Widget, void);
  

  
  };



#endif
