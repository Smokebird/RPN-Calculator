//This file will contain code to start testing our stack as well as any other functions we need for the rpn calculator.

#include<iostream>
#include"stack.h"
#include<FL/Fl.H>
#include<FL/Fl_Window.H>
#include<FL/Fl_Box.H>
#include<FL/Fl_Button.H>

//#include"operandButton.h"
#include"operatorButton.h"


using namespace std;

int main(int argc,  char *argv[]){
  Fl_Window *window=new Fl_Window(360,500);
  Fl_Box *box = new Fl_Box(20,40,260,100,"I work");
box->box(FL_UP_BOX);
  box->labelfont(FL_BOLD+FL_ITALIC);
  box->labelsize(36);
  box->labeltype(FL_SHADOW_LABEL);
  window->end();
  window->end();
  window->show(argc, argv);
 return Fl::run();
}
// argv can not be consint
