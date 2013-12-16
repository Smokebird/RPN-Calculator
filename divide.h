//header file for divide button

#ifndef DIVIDEBUTTON
#define DIVIDEBUTTON

#include <Fl/Fl_Button.H>
#include "utils.h"
#include "stack.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>
using namespace std;

class divideButton : public Fl_Button {
 
 public:
  float from_string(const std::string &s) {
    stringstream ss(s);
    float result;
    ss >> result;
    return result;
  }
  string *myStr;
  Stack *stack;


 divideButton(int X, int Y, int W, int H, char* label, Stack *stack, string* str) : Fl_Button(X,Y,W,H, label){
    this->stack = stack;
    this->myStr = str;
  }

  static void diCB(Fl_Widget* d, void*){
    float op1;
    float op2;
    float res = (op1/op2);
    divideButton *myButton = (divideButton *)d;
    op2 = myButton->from_string(*myButton->myStr);
    op1 = myButton->stack->pop();
   
    myButton->stack->push(res);
    cout << "The number you pushed on the stack was : " << res << endl;
  }
};
#endif
