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

struct Queue
{
    Node*head;
    Node*tail;
    int size;
    // int front;
    // int rear;

    Queue(){
        tail=NULL;
        head=NULL;
        size=0;
        // front=0;
        // rear=-1;
    }

 
  void enqueue(int val){
      Node*temp=new Node(val);
      if(tail==NULL)
      {
            tail=head=temp;
            return;
      }
      tail->next=temp;
      tail=temp;
    //   rear++;
      size++;
  }

  int dequeue(){

      if(head==NULL){
          return -1111111;
      }
      Node*temp=head;
      int res=temp->data;
      head=head->next;
      delete(temp);
      return res;

  }


    int peek(){
        if(head==NULL)
            return INT32_MAX;
        else
            return head->data;    
    }






};

int main(){
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(61);
    cout<<q.dequeue()<<" ";
    cout<<q.dequeue()<<" ";
    cout<<q.dequeue()<<" ";
    cout<<q.dequeue()<<" ";
    cout<<q.dequeue()<<" ";
    // cout<<q.dequeue()<<" ";

}