//header file for multiplication button

#ifndef MULTIPLYBUTTON
#define MULTIPLYBUTTON

#include<Fl/Fl_Button.H>
#include "utils.h"
#include "stack.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>
using namespace std;

class multiplyButton : public Fl_Button {

 public:
  float from_string(const std::string &s) {
    stringstream ss(s);
    float result;
    ss >> result;
    return result;
  }
  string *myStr;
  Stack *stack;



 multiplyButton(int X, int Y, int W, int H, char* label, Stack *stack, string* str) : Fl_Button(X,Y,W,H, label){
    this->stack = stack;
    this->myStr = str;
  }


  static void muCB(Fl_Widget* m, void*){
    float op1;
    float op2;
    
    multiplyButton *myButton = (multiplyButton *)m;
    if(!(*myButton->myStr).compare("") == 0){
      std::cout << "Empty String" << std::endl;
      float number = myButton->from_string(*myButton->myStr);
      myButton->stack->push(number);
    }

    op2 = myButton->stack->pop();
    op1 = myButton->stack->pop();
    cout << op1 << " - " << op2 << endl;

    float res = (op1*op2);
    myButton->stack->push(res);
    cout << "The number you pushed on the stack was : " << res << endl;
    (*myButton->myStr) = "";
  }

};
#endif
