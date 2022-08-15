#include<bits/stdc++.h>
using namespace std;

class ListNode{
    public:
    int data;
    ListNode*next;

    ListNode(int x){
        data=x;
        next=NULL;
    }



};
void print(ListNode*head){
     ListNode*p=head;
     if(p==NULL)
        return;
     cout<<p->data<<endl;
     print(p->next);   
 }

    






 ListNode* removeNthFromEnd(ListNode* head, int n) {
     ListNode*temp=head;
     int i=0;
     if(head==NULL)
        return NULL;
    
    if(head->next==NULL)
        return NULL;

    while(i<n){
        temp=temp->next;
        i++;
    }

    // cout<<temp->data;//to be del


    temp->next=temp->next->next;
   
    print(head);
    return head;

    }

 
int main(){
    ListNode*head=new ListNode(10);
    head->next=new ListNode(20);
    head->next->next=new ListNode(30);
    head->next->next->next=new ListNode(40);
    head->next->next->next->next=new ListNode(50);
    removeNthFromEnd(head,2);
}