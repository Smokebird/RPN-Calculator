//This file will contain code to start testing our stack as well as any other functions we need for the rpn calculator.

#include<iostream>
#include"stack.h"
#include<FL/Fl.H>
#include<FL/Fl_Window.H>
#include<FL/Fl_Box.H>
#include<FL/Fl_Button.H>



#include"operandButton.h"
//#include"operatorButton.h"
void exitcb(Fl_Widget *, void *) {
  exit(0);
}


using namespace std;


int main(int argc, char *argv[]){
  //Fl_Window *window=new Fl_Window(600,600, "Hello");
  Stack *stack = new Stack();

  
  Fl_Window *window = new Fl_Window(600, 600);

  Fl_Box *box = new Fl_Box(20,40,260,100,"I work");
  box->box(FL_UP_BOX);
  box->labelfont(FL_BOLD+FL_ITALIC);
  box->labelsize(36);
  box->labeltype(FL_SHADOW_LABEL);
  
  OperandButton *b1 = new OperandButton(100, 100, 80, 80, "9", stack);
  b1->callback(b1->opCB,0);


  Fl_Button *b3 = new Fl_Button(220,20, 80, 25, "E&xit");
  b3->callback(exitcb,0);
  
  window->end();
  window->end();
  window->show(argc, argv);
  return Fl::run();
}
// argv can not be consint
