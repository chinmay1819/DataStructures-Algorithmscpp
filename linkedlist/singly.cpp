#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

    Node(int x){
        data=x;
        next=NULL;
    }



};
void print(Node*head){
     Node*p=head;
     if(p==NULL)
        return;
     cout<<p->data<<endl;
     print(p->next);   
 }

//inserting at the end of the linked list

Node* insertatend(Node*head,Node*in){
    Node*p=head;
    while(p->next!=NULL)
        p=p->next;
    p->next=in;

    return head;    
}

//deleting last Node 

Node* deletelastnode(Node*head){
    Node*p=head;
    while(p->next->next!=NULL)
        p=p->next;

    p->next=NULL;    

    return head;
}

// inserting at a particular position 
Node* insertatpos(Node*head,int x,int pos){
    if(head==NULL){
        Node*temp=new Node(x);
        temp->next=head;
        return temp;
    }
    
    int i=1;
    Node*p=head;
    Node*t=new Node(x);
    while(i<pos-1){
        p=p->next;
        i++;
    }
    t->next=p->next;
    p->next=t;

    return head;
}

// searching a node by key

int search(Node*head,int key,int num){
    Node*p=head;
    
    if(p==NULL)
        return -1;

    if(p->data==key)
        return num;
    else
        search(p->next,key,num+1);

                 
}
int max(Node*head){
    Node*p=head;
    if(p==NULL)
        return INT32_MAX;
    int ans=p->data;
    while(p->next!=NULL){
        p=p->next;
        if(ans<p->data)
            ans=p->data;
    }
return ans;
}

int min(Node*head){
    Node*p=head;
    if(p==NULL)
        return INT32_MAX;
    int ans=p->data;
    while(p->next!=NULL){
        p=p->next;
        if(ans>p->data)
            ans=p->data;
    }
return ans;
}


 
 
int main(){
    Node*head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=new Node(50);
    
    Node*in=new Node(60);
    insertatend(head,in);
    print(head);
    cout<<"After deleting the last node "<<endl;
    deletelastnode(head);
    print(head);
    cout<<"After adding a node at a position"<<endl;
    int k=70;int pos=3;
    insertatpos(head,k,pos);
    print(head);
    int key=50;
    int num=1;
    cout<<"Element is found at position : "<<search(head,key,num)<<endl;

    cout<<"Maximum of the ll : "<<max(head)<<endl;
    cout<<"Minimum of the ll : "<<min(head)<<endl;

}