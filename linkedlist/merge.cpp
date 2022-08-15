#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

    public:
    Node(int x)
    {
        this->data=x;
        this->next=NULL;
    }

};

void print(Node*head){
    if(head==NULL)
        return;
    cout<<head->data<<" ";
    print(head->next);
}





Node* mergeTwo(Node*a,Node*b){
    Node*head,*tail;
    if(a->data<=b->data)
    {
        head=tail=a;
    }
    else if(a->data>b->data)
        head=tail=b;
    

    while(a!=NULL && b!=NULL){
        if(b->data>a->data){
            tail=a;
            a=a->next;
        }
        else if(a->data>=b->data){
            tail=b;
            b=b->next;
        }



    }
    while(a!=NULL){
        tail=a;
        a=a->next;
    }
    while(b!=NULL){
        tail=b;
        b=b->next;
    }


 return head;


}




int main(){
    Node*a=new Node(10);
    a->next=new Node(20);
    a->next->next=new Node(30);
    a->next->next->next=new Node(40);
    a->next->next->next->next=new Node(50);

    Node*b=new Node(15);
    b->next=new Node(25);
    b->next->next=new Node(35);
    b->next->next->next=new Node(45);
    b->next->next->next->next=new Node(55);

    Node*head=mergeTwo(a,b);
    print(head);
}