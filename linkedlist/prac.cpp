#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
    int data;
    Node*next;

    public:
    Node(int x){
        data=x;
        next=NULL;
    }
};

void insert(Node*head,int val){
    Node*n=new Node(val);
    Node*temp=head;
    while(temp->next!=NULL){
      temp=temp->next;  
    }
    temp->next=n;

}


void print(Node*head){
    Node*p=head;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}



int main(){
    Node*head=new Node(1);
    insert(head,2);
    print(head);
}