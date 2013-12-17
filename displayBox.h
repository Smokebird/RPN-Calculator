//header file for plus button

#ifndef DISPLAY
#define DISPLAY

#include<Fl/Fl_Box.H>
#include "utils.h"
#include "stack.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>
using namespace std;

class DisplayBox : public Fl_Box {

 public:
  /*float from_string(const std::string &s) {
    stringstream ss(s);
    float result;
    ss >> result;
    return result;
  }
  */
  //string *myStr;
  Stack *stack;
  


 DisplayBox(int X, int Y, int W, int H, char* label, Stack *stack) : Fl_Button(X,Y,W,H, label){
    this->stack = stack;
   
  }

  void updateBox(){
    //Do something to display the top of the stack in the display box.
  }
  
/*
  static void plCB(Fl_Widget* p, void*){
    float op1;
    float op2;
    
    plusButton *myButton = (plusButton *)p;
    op2 = myButton->from_string(*myButton->myStr);
    op1 = myButton->stack->pop();
    float res = (op1 + op2);
    myButton->stack->push(res);
    cout << "The number you pushed on the stack was : " << res << endl;
  }*/
};

#endif
