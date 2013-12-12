#include"operatorButton.h"
#include"stack.h"

using namespace std;

static void opCB(Fl_Widget *w, void *){
  operatorButton *myButton = (operatorButton *)w;
  myButton->stack->push(myButton->id);
}
