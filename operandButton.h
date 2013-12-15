#ifndef OPERANDBUTTON
#define OPERANDBUTTON

#include<FL/Fl_Button.H>
#include"utils.h"
#include"stack.h"
#include<cstdlib>
#include<vector>
#include<string>
#include<iostream>

using namespace std;

class OperandButton : public Fl_Button {

private:
  
public:
  
  Stack *stack;
  string id;
  string *myStr;

 OperandButton(int X, int  Y, int W, int H, char* label, Stack* stack, string *numLst)  : Fl_Button(X, Y, W, H, label){
    this->stack = stack;
    this->myStr = numLst;
    //int temp = std::atoi(label);
    this->id = label;
    
  }
  
  
  
  static void opCB(Fl_Widget* w, void*){
    OperandButton *myButton = (OperandButton *)w;
    string temp = (*myButton->myStr) + myButton->id;
    (*myButton->myStr)= temp;
    //myButton->stack->push(myButton->id);


  }
  

  
  };



#endif
