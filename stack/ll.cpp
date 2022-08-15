#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

    public:
    Node(int x){
        this->data=x;
        this->next=NULL;

    }

};


class Stack{
public:
int top=-1;
int size=0;
Node*head;
Node*samp;
Node*tail;

Stack()
{
    Node*head;
    head=tail=samp;

}

void push(int val){
    if(size!=0) samp=samp->next;
    tail->data=val;
    tail=tail->next;
    size++;
}

int pop(){
    int p=tail->data;
    tail=samp;
    return p;

}



};

int main(){
  Stack s;
  s.push(10);
  cout<<s.pop();
}