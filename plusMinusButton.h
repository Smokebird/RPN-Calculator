//header file for square root button

#ifndef PLUSMINUS
#define PLUSMINUS

#include <Fl/Fl_Button.H>
#include "utils.h"
#include "stack.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <math.h>
using namespace std;

class PlMnButton : public Fl_Button {

   public:
   float from_string(const std::string &s) {
    stringstream ss(s);
    float result;
    ss >> result;
    return result;
  }
  
   string *myStr;
  Stack *stack;



 PlMnButton(int X, int Y, int W, int H, char* label, Stack *stack, string* str) : Fl_Button(X,Y,W,H, label){
    this->stack = stack;
    this->myStr = str;
  }
  
  static void pmCB(Fl_Widget* s, void*){
    float op1;
    //    float op2;
    PlMnButton *myButton = (PlMnButton *)s;

    if(!(*myButton->myStr).compare("") == 0){
      cout << "Empty String" << endl;
      float number = myButton->from_string(*myButton->myStr);
      myButton->stack->push(number);
    }



    // op2 = myButton->stack->pop();
    op1 = myButton->stack->pop();
    cout << op1 << "+/- " << endl;

    //TODO: modify line below to sqrt. It is currently addition.
    
    float res =-1*(op1);
    
    myButton->stack->push(res);
    cout << "The number you pushed on the stack was : " << res << endl;
    (*myButton->myStr) = "";
  }
};

#endif
