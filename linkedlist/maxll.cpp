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

int maxel(Node*head){
    Node*temp=head;
    int max=temp->data;
    while(temp!=NULL){
        if(max<temp->data)
            max=temp->data;
        
        temp=temp->next;

    }
    return max;
}

int maxr(Node*head,int m){
    if(head==NULL){
        return m;
    }

    if(head->data>m)
        maxr(head->next,head->data);
    else 
       maxr(head->next,m);    

}






int main(){
    Node*head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    int m=10;
    cout<<maxr(head,m)<<endl;

}