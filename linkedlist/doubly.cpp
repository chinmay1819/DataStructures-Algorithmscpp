#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
    Node*prev;

    Node(int x){
        data=x;
        next=prev=NULL;
    }
};
Node*push(Node*head,Node*temp){
    if(head==NULL)
        return head;

    head->next=temp;
    temp->prev=head;
    return head;
    
}


int pop(Node*head){
    Node*p=head;
    if(p==NULL)
        return -1;
    while (p->next!=NULL)
    {
        p=p->next;
    }
    int res=p->data;
    p->prev->next=NULL;
    
    return res;
    

}
Node*reverse(Node*head){
    Node*cur=head;
    Node*p=cur->prev;
    Node*n=cur->next;

    while(cur->next->next!=NULL)
        cur=cur->next;

    



}







void print(Node*head){
    Node*p=head;
    if(p==NULL)
        return ;

    cout<<p->data<<endl;
    print(p->next);

}



int main(){
    Node*head=new Node(10);
    Node*temp=new Node(20);
    push(head,temp);
    // print(head);
    Node*temp2=new Node(30);
    Node*temp3=new Node(40);
    push(temp,temp2);
    push(temp2,temp3);

    cout<<pop(head)<<endl;
    
    print(head);

    
   
}