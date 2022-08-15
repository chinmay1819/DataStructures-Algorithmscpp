#include<bits/stdc++.h>
using namespace std;
// using tree 
class Node{
    public :
    int data;
    Node*left;
    Node*right;
    
    Node(int d){
        data=d;
        left=right=NULL;
    }
};
void bsort(int arr[],int n){
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
}
Node* createnode(int val,Node*a,Node*b){
    Node*n=new Node(val);
    if(a->data<b->data){
    n->left=a;
    n->right=b;
    }
    else{
        n->left=b;
        n->right=a;
    }
    return n;
}
Node* mergetwonodes(Node*a,Node*b){
    int val=a->data+b->data;
    Node*r=createnode(val,a,b);
    return r;
}
void preorder(Node*root){
    if(root==NULL)
        return ;
    cout<<root->data<<endl;
    preorder(root->left);
    preorder(root->right);

}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void optimalMerge(int arr[],int n){
    bsort(arr,n);
    cout<<"Sorted Array "<<endl;
    print(arr,n);
    cout<<"------------"<<endl;
     int c=arr[0];
    int p=arr[1];
    Node*a=new Node(c);
    Node*b=new Node(p);
int i=2;
    Node*root=mergetwonodes(a,b);
    while(i<n){
        Node*temp=new Node(arr[i]);
        Node*t=mergetwonodes(temp,root);
        root=t;
    }

    preorder(root);
}

int main(){
    //taking array 
    int arr[]={10,20,5,4,21};
    int n=5;

   optimalMerge(arr,n);
   

}