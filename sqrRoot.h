//header file for square root button

#ifndef SQRT
#define SQRT

#include <Fl/Fl_Button.H>
#include "utils.h"
#include "stack.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>

#include <math.h>

using namespace std;

class sqrtButton : public Fl_Button {


   public:
   float from_string(const std::string &s) {



    stringstream ss(s);
    float result;
    ss >> result;
    return result;
  }
   
   
   string *myStr;

  Stack *stack;



 sqrtButton(int X, int Y, int W, int H, char* label, Stack *stack, string* str) : Fl_Button(X,Y,W,H, label){
    this->stack = stack;
    this->myStr = str;
  }
  
  static void sqCB(Fl_Widget* s, void*){
    float op1;

    //    float op2;
    sqrtButton *myButton = (sqrtButton *)s;


    if(!(*myButton->myStr).compare("") == 0){
      cout << "Empty String" << endl;
      float number = myButton->from_string(*myButton->myStr);
      myButton->stack->push(number);
    }




    // op2 = myButton->stack->pop();
    op1 = myButton->stack->pop();
    cout << op1 << " sqrt " << endl;

    //TODO: modify line below to sqrt. It is currently addition.
    
    float res =sqrt(op1);
    

    myButton->stack->push(res);
    cout << "The number you pushed on the stack was : " << res << endl;
    (*myButton->myStr) = "";
  }
};

#endif
