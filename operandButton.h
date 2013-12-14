#ifndef OPERANDBUTTON
#define OPERANDBUTTON


#include<FL/Fl_Button.H>



#include"utils.h"
#include"stack.h"
#include<cstdlib>

using namespace std;

class OperandButton : public Fl_Button {
private:
  
public:
  Stack *stack;
  float id;

public:
 


  OperandButton(int X, int  Y, int W, int H, char* label, Stack* stack)  : Fl_Button(X, Y, W, H, label){

    this->stack = stack;  
    int temp = std::atoi(label);
    this->id = temp;
  }

  
  static void opCB(Fl_Widget* w, void*){
    OperandButton *myButton = (OperandButton *)w;
    myButton->stack->push(myButton->id);
  }
  static char num[20];


  
  };



#endif
