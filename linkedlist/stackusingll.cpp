#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
    Node*top;

    Node(int x){
        data=x;
        next=NULL;
    }
};

int findmax(Node*head){
    Node*p=head;
    int max=p->data;
    while(p->next!=NULL){
        p=p->next;
        if(p->data>max)
            max=p->data;
    }
    return max;

}
int findmaxrec(Node*p,int max){
    if(p==NULL)
        return max;

    if(p->data>max){
        max=p->data;
        findmaxrec(p->next,max);
    }
    else 
        findmaxrec(p->next,max);

}

void print(Node*head){
    Node*p=head;
    while(p!=NULL){
        cout<<p->data<<endl;
        p=p->next;

    }
}

Node*merge(Node*head,Node*head1){
    Node*p=head;
    Node*q=head1;
    Node*res;
    if(p->data<q->data)
        res=p;
    
    else
        res=q;
  
    while(p!=NULL&&q!=NULL){
        if(p->data<q->data){
           res->next=p;
           p=p->next; 
        }
        else{
            res->next=q;
            q=q->next;
        }
    }
    if(p!=NULL){
        res->next=p;
    }
    if(q!=NULL)
        res->next=q;


    return res;

} 


Node* push(Node*head,int data){
    Node*temp=new Node(data);
    temp->next=head;
    head=temp;
    Node*top=head;
    return top;

}


bool isEmpty(Node*head){
    if(head==NULL)
        return true;
    else
        return false;    
}


int top(Node*head){
    if(isEmpty(head))
        return -1;

    return head->data;    

}

Node* pop(Node*head){
    if(isEmpty(head))
        return NULL;

    int x=head->data;
    head=head->next;
    return head;    

}







int main(){
    Node*head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=new Node(50);
    // print(head);
    // cout<<"Max element : "<<findmax(head)<<endl;
    // int max=0;
    // cout<<"max using rec : "<<findmaxrec(head,max)<<endl;
    // Node*head1=new Node(15);
    // head1->next=new Node(25);
    // head1->next->next=new Node(35);
    // head1->next->next->next=new Node(45);
    // head1->next->next->next->next=new Node(55);

    // Node*merged=merge(head);
    // print(merged);
    head=push(head,33);
    head=push(head,55);
    cout<<pop(head);
    cout<<top(head)<<endl;
    cout<<pop(head);
    cout<<top(head)<<endl;
    cout<<pop(head);
    cout<<top(head)<<endl;
    cout<<pop(head);
    cout<<top(head)<<endl;
    cout<<pop(head);
    cout<<top(head)<<endl;
    cout<<pop(head);
    cout<<top(head)<<endl;
    cout<<pop(head);
    cout<<top(head)<<endl;




}