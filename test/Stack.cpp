#include "gtest/gtest.h"
#include "../src/Stack.h"

TEST(StackTest, Push) {
  Stack* s = new Stack();
  s->push(6);

  EXPECT_EQ(6, s->peek());

  
  delete s;
}

TEST(StackTest, Size) {

 Stack* m = new Stack();
 m->size();
 m->push(10);
 m->push(2);
 m->push(41);
 m->push(5);
 m->push(74);
 m->push(6);
 m->push(2);
 m->push(11);
 m->push(44);
 m->push(125);
 m->size();
  // std::cout<<("Stack is")<<m.size() <<std::endl; 


 EXPECT_EQ(125, m->peek());
 delete m;
}
 



TEST(StackTest, Pop){

 Stack* r = new Stack();
 r->pop();

 delete r;


}

