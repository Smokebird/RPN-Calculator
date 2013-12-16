//This file will contain code to start testing our stack as well as any other functions we need for the rpn calculator.

#include<iostream>
#include"stack.h"
#include<FL/Fl.H>
#include<FL/Fl_Window.H>
#include<FL/Fl_Box.H>
#include<FL/Fl_Button.H>


#include"subtractButton.h"

#include "plus.h"
#include "multiply.h"
#include"operandButton.h"
#include"enterButton.h"
												       //#include"operatorButton.h"
void exitcb(Fl_Widget *, void *) {
  exit(0);
   }


using namespace std;


int main(int argc, char *argv[]){
  //Fl_Window *window=new Fl_Window(600,600, "Hello");
  Stack *stack = new Stack();
  string*numLst = new string;
  
  
  Fl_Window *window = new Fl_Window(600, 600);

  Fl_Box *box = new Fl_Box(20,40,260,100,"I work");
  box->box(FL_UP_BOX);
  box->labelfont(FL_BOLD+FL_ITALIC);
  box->labelsize(36);
  box->labeltype(FL_SHADOW_LABEL);
  
  OperandButton *b1 = new OperandButton(100, 100, 80, 80, "9", stack, numLst);
  b1->callback(b1->opCB,0);

  EnterButton *b2 = new EnterButton(300, 300, 80,80 ,"Enter", stack, numLst);
  b2->callback(b2->enterCB, 0);

  Fl_Button *b3 = new Fl_Button(220,20, 80, 25, "E&xit");
  b3->callback(exitcb,0);
  
  SubtractButton *b4 = new SubtractButton( 300,200, 30,30,"-", stack, numLst);
  b4->callback(b4->sbCB,0);

  plusButton *b5 = new plusButton (400, 60, 30, 30, "+", stack, numLst);
  b5->callback(b5->plCB, 0);
  
  multiplyButton *b6 = new multiplyButton (500, 70, 30, 30, "X", stack, numLst);
  b6->callback(b6->muCB, 0);

  window->end();
  window->end();
  window->show(argc, argv);
  return Fl::run();
}
