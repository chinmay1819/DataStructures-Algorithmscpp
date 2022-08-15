#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
    int capacity=200,*arr,top=-1,size;
    public:
    Stack(int size){
        this->size=size;
         arr=new int[size];

    }
    public:
    bool isEmpty(){
        if(top==-1) return true;
        else return false;
    }
    bool isFull(){
        if(top==capacity-1) return true;
        return false;
    }
    void push(int val){
        if(isFull()) return ;
        top++;
        arr[top]=val;
    }
    int pop(){
        if(isEmpty()) return INT_MIN;
        int x=arr[top];
        top--;
        return x;
    }
    int sizeofstack(){
        return size;
    }
    int topstack(){
        if(isEmpty()) return INT_MIN;
        return arr[top];
    }
};

int main(){
    Stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
   cout<<s.pop()<<endl;
}