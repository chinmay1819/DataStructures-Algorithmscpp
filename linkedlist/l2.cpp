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
    ListNode*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}


ListNode* removeNthFromEnd(ListNode* head, int n) {
    if(head->next==NULL){
        return NULL;
    }
    


    ListNode*count=head;
    int c=0;
    while(count!=NULL){
        c++;
        count=count->next;
    }
    // cout<<"Node are "<<c<<endl;

    ListNode*temp=head;
    int p=c-n;
    int i=0;
    while(i<p-1){
        temp=temp->next;
        i++;
    }

    temp->next=temp->next->next;
    print(head);
    return head;

}

int main(){
    ListNode *head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(3);
    // head->next->next->next=new ListNode(4);
    // head->next->next->next->next=new ListNode(5);
    int n=3;
    cout<<"LL before"<<endl;
    print(head);
    cout<<"After"<<endl;
    removeNthFromEnd(head,n);




}