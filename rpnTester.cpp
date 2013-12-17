//This file will contain code to start testing our stack as well as any other functions we need for the rpn calculator.

#include<iostream>
#include"stack.h"
#include<FL/Fl.H>
#include<FL/Fl_Window.H>
#include<FL/Fl_Box.H>
#include<FL/Fl_Button.H>
#include"displayBox.h"


#include"subtractButton.h"
#include "sqrRoot.h"
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
Fl_Window *window = new Fl_Window(600, 600);
  DisplayBox *db = new DisplayBox(20,20,120,80,"0");
  Stack *stack = new Stack(db);
  string*numLst = new string;
  
  //  
  

  //Fl_Box *box = new Fl_Box(20,40,200,80,"I work");
  //  box->box(FL_UP_BOX);
  // box->labelfont(FL_BOLD+FL_ITALIC);
  // box->labelsize(36);
  // box->labeltype(FL_SHADOW_LABEL);
  //<<<<<<< HEAD
   
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

  
  

<<<<<<< HEAD
=======


>>>>>>> 64bfbe4eb8cd90fb01950c980defa1534c7f31dc
  EnterButton *b2 = new EnterButton(370, 300, 80,80 ,"Enter", stack, numLst);
     b2->callback(b2->enterCB, 0);
  /*
=======

  OperandButton *b8 = new OperandButton(25,500,80,80, "0", st
ack, numLst);
  b8->callback(b8->opCB,0);
  
  OperandButton *b9 = new OperandButton(25,410,80,80, "1", stack, numLst);
  b9->callback(b9->opCB,0);

  OperandButton *b10 = new OperandButton(25,320,80,80, "4", stack, numLst);
  b10->callback(b10->opCB,0);

  OperandButton *b11 = new OperandButton(25,230,80,80, "7", stack, numLst);
  b11->callback(b11->opCB,0);

  OperandButton *b12 = new OperandButton(115,410,80,80, "2", stack, numLst);
  b12->callback(b12->opCB,0);

  OperandButton *b13 = new OperandButton(115,320,80,80, "5", stack, numLst);
  b13->callback(b13->opCB,0);

  OperandButton *b14 = new OperandButton(115,230,80,80, "8", stack, numLst);
  b14->callback(b14->opCB,0);

  OperandButton *b15 = new OperandButton(205,410,80,80, "3", stack, numLst);
  b15->callback(b15->opCB,0);

  OperandButton *b16 = new OperandButton(205,320,80,80, "6", stack, numLst);
  b16->callback(b16->opCB,0);

  OperandButton *b1 = new OperandButton(205, 230, 80, 80, "9", stack, numLst);
  b1->callback(b1->opCB,0);

  EnterButton *b2 = new EnterButton(295,410 , 80,170 ,"Enter", stack, numLst);
  >>>>>>> 0ddbf5cdb363067980233bc310911ce8caaf1412
  b2->callback(b2->enterCB, 0);
*/
  Fl_Button *b3 = new Fl_Button(460,300, 80, 25, "E&xit");
  b3->callback(exitcb,0);
  
  //<<<<<<< HEAD
  SubtractButton *b4 = new SubtractButton( 370 ,210, 80,80,"-", stack, numLst);
  b4->callback(b4->sbCB,0);

  PlusButton *b5 = new PlusButton (370, 120, 80, 80, "+", stack, numLst);
  b5->callback(b5->plCB, 0);
  
  multiplyButton *b6 = new multiplyButton (460, 210, 80, 80, "*", stack, numLst);
  b6->callback(b6->muCB, 0);

  divideButton *b7 = new divideButton ( 460, 120, 80, 80, "/", stack, numLst);
  b7->callback(b7->diCB, 0);

  sqrtButton *b8 = new sqrtButton (460,260,80,80,"sqrt", stack,numLst);
  b8->callback(b8->sqCB, 0);

  window->end();
  window->end();
  window->show(argc, argv);
  return Fl::run();
}
