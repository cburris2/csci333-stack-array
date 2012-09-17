#include "Stack.h"
#include <iostream>
#include <assert.h>

Stack::Stack(int initialSize) {
  theStack = new int[initialSize];
  top = 0;
}

Stack::~Stack() {
  delete[] theStack;
}

void Stack::push(int value) {
    int initSize = capacity = 10;
    int oldSize = initSize;
    int newSize = initSize*2;
  int* NewStack = new int[newSize];  // create new stack twice as big
 
   if (top == capacity) {          //if theStack is full
     for (int i =0; i<=top; i++) {

       NewStack[i] = theStack[i]; // copy all elements to new stack
	
	}
        //NewStack[top] = value;
	 //top++;
         oldSize = newSize;  //set oldSize == newSize 
         delete[] theStack; //delete old stack
	theStack = NewStack; // point old stack pointer to new stack
}
  assert (top!=capacity);
 
 theStack[top] = value;
  top++;
}

int Stack::pop() {
  top--;
  return theStack[top];
}

int Stack::peek() {
  return theStack[top-1];
}

int Stack::size() {
  return top;
}
