#include <iostream>
using namespace std;
class Stack{
//properties

public:
int *arr;
int top;
int size;

//behaviour
Stack(int size){
  this->size = size;
  arr = new int[size];
  top = -1;
}

void push(int element){
  if(size - top > 1){
    top++;
    arr[top] = element;
  }else{
    cout<<"Stack Overflow"<<endl;
  }
}

void pop(){
  if(top >=0){
    top--;
  }else{
    cout<<"No element to pop"<<endl;
  }
}
int peek(){
if(top>=0){
  return arr[top];
}else{
  cout<<"Not Found"<<endl;
  return -1;
  }
}

bool isEmpty(){
  if(top == -1){
    return true;
  }
  else{
    
    return false;
  
    }
}

};

int main() 
{
  Stack st(5);

  st.push(5);
  st.push(6);
  st.push(7);
  st.push(8);
  st.push(9);

  st.pop();

  // cout<<st.peek();

  while(!st.isEmpty()){
    cout<<st.peek()<<endl;
    st.pop();
    
  }
  
  return 0;
  
}