#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
    int *arr;
    int top=-1,size;
    int capacity=20;

   Stack(int size){
       this->size=size;
       arr=new int(size);
   } 
public:
 bool isEmpty(){
    if(top==-1)
        return true;
    else 
        return false;
 }

 bool isFull(){
     if(top==capacity-1)
        return true;
     else
        return false;   
 }

void push(int val){
    if(isFull())
        cout<<"Stack Overflow"<<endl;
    else
        top+=1;
        arr[top]=val;    
}
void pop(){
    if(isEmpty())
        cout<<"Stack Underflow"<<endl;
    else
        top--;
        
}

int topstack(){
    if(isEmpty()){
        cout<<"Stack Underflow"<<endl;
        return -1111;
    }
  return arr[top];    
}


};

int main(){
    int size;
    cout<<"size of stack : "<<endl;
    cin>>size;

    Stack s1(size);
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    // s1.pop();
    // s1.pop();
    // s1.pop();
    // s1.pop();
    // s1.pop();
    cout<<s1.topstack()<<endl;
    // s1.push(60);
    // cout<<s1.topstack()<<endl;
    s1.pop();
    cout<<s1.topstack()<<endl;
    
}