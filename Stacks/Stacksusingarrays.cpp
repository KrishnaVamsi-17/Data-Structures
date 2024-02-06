#include<bits/stdc++.h>
using namespace std;

class Stack{
   //properties
   public:
          int top;
          int *arr;
          int size;
    Stack(int size){
       this->size=size;
       arr = new int[size];
       top=-1;
    }
    void push(int data){
      if(size-top>1){
        top++;
        arr[top] = data;
      }
      else cout<<"Stack Overflow"<<endl;

    }
    void pop(){
       if(top>=0) top--;
       else cout<<"Stack UnderFlow"<<endl;

    }
    int peek(){
      if(top>=0 && top<size) return arr[top];
      else{
        cout<<"Stack is empty"<<endl;
        return -1;
      }
    }

    bool isEmpty(){
      if(top==-1) return true;
      else return false;

    }

};

int main(){

  Stack st(5);

  st.push(2);
  st.push(4);
  st.push(5);
  cout<<st.peek()<<endl;
  st.pop();
  cout<<st.peek()<<endl;
}
