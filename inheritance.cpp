#include <iostream>

class Stack{
protected:
  enum {MAX=10};
  float st[MAX];
  int top;
public:
  Stack():top(-1){}

  void push(float item){
  st[++top]=item;
  }

  float pop(){
  return st[top--];
  }
};

class BetterStack:public Stack{
public:
  void push(float item){
  if(top!=(MAX-1))
  st[++top]=item;
  else
  std::cout<<"\npush_error\n";
  }

  float pop(){
  if(top>=0)
  return st[top--];
  else
  std::cout<<"\npop_error\n";
  }
};

int main(){
BetterStack s;
for(int i=0;i<11;i++)
s.push(i);

for(int i=0;i<11;i++)
std::cout<<s.pop();

return 0;
}
