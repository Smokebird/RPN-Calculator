//This file will contain code to start testing our stack as well as any other functions we need for the rpn calculator.

#include<iostream>
#include"stack.h"
#include<FL/Fl.H>
#include<FL/Fl_Window.H>
#include<FL/Fl_Box.H>
#include<FL/Fl_Button.H>


#include"subtractButton.h"

#include "divide.h"
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

  Fl_Box *box = new Fl_Box(20,40,200,80,"I work");
  box->box(FL_UP_BOX);
  box->labelfont(FL_BOLD+FL_ITALIC);
  box->labelsize(36);
  box->labeltype(FL_SHADOW_LABEL);
   
  //The following code makes each of the operand buttons. A for loop would absolutely work better, unfortunately, as I was working it out it would have required type conversions which are a huge pain in the butt with this compiler.
  
  OperandButton *ob1 = new OperandButton(100,300 , 80, 80,"1", stack, numLst);
  ob1->callback(ob1->opCB,0);
  
  OperandButton *ob2 = new OperandButton(190, 300, 80, 80,"2", stack, numLst);
  ob2->callback(ob2->opCB,0);

  OperandButton *ob3 = new OperandButton(280, 300, 80, 80,"3", stack, numLst);
  ob3->callback(ob3->opCB,0);

  OperandButton *ob4 = new OperandButton(100,210, 80, 80,"4", stack, numLst);
  ob4->callback(ob4->opCB,0);

  OperandButton *ob5 = new OperandButton(190, 210, 80, 80,"5", stack, numLst);
  ob5->callback(ob5->opCB,0);

  OperandButton *ob6 = new OperandButton(280, 210, 80, 80,"6", stack, numLst);
  ob6->callback(ob6->opCB,0);

  OperandButton *ob7 = new OperandButton(100, 120, 80, 80,"7", stack, numLst);
  ob7->callback(ob7->opCB,0);

  OperandButton *ob8 = new OperandButton(190, 120, 80, 80,"8", stack, numLst);
  ob8->callback(ob8->opCB,0);

  OperandButton *ob9 = new OperandButton(280, 120, 80, 80,"9", stack, numLst);
  ob9->callback(ob9->opCB,0);

  OperandButton *ob0 = new OperandButton(190, 390, 80, 80,"0", stack, numLst);
  ob0->callback(ob0->opCB,0);

  
  


  EnterButton *b2 = new EnterButton(370, 300, 80,80 ,"Enter", stack, numLst);
  b2->callback(b2->enterCB, 0);

  Fl_Button *b3 = new Fl_Button(460,300, 80, 25, "E&xit");
  b3->callback(exitcb,0);
  
  SubtractButton *b4 = new SubtractButton( 370 ,210, 80,80,"-", stack, numLst);
  b4->callback(b4->sbCB,0);

  PlusButton *b5 = new PlusButton (370, 120, 80, 80, "+", stack, numLst);
  b5->callback(b5->plCB, 0);
  
  multiplyButton *b6 = new multiplyButton (460, 210, 80, 80, "*", stack, numLst);
  b6->callback(b6->muCB, 0);

  divideButton *b7 = new divideButton ( 460, 120, 80, 80, "/", stack, numLst);
  b7->callback(b7->diCB, 0);

  window->end();
  window->end();
  window->show(argc, argv);
  return Fl::run();
}
