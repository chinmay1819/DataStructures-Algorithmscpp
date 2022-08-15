#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node*next;

    Node(int d){
        data=d;
        next=NULL;
    }
};

struct Stack{
    Node*head;
    int s;

    Stack(){
        head=NULL;
        s=0;
    }

 void push(int val){
     Node*temp=new Node(val);
     temp->next=head;
     head=temp;
     s++;
 }

 int pop(){
     Node*temp=head;
     int res=head->data;
     head=head->next;
     delete(temp);
    return res;
 }

int size(){
    return s;
}

bool isEmpty(){
    if(head==NULL)
        return true;
    else
        return false;    
}


int peek()
{
    if(head==NULL)
        return INT32_MAX;

    return head->data;    
}



};


int main(){
 Stack s1;
 s1.push(10);
 s1.push(20);
 s1.push(30);
 s1.push(40);
 s1.push(50);

 cout<<s1.pop()<<endl;
 cout<<s1.pop()<<endl;
 cout<<s1.pop()<<endl;
 cout<<s1.pop()<<endl;
 cout<<s1.pop()<<endl;
 

}