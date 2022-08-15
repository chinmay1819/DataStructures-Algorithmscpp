#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
    int data;
    Node*left,*right;

    Node(int x){
        data=x;
        right=left=NULL;
    }
};

Node* insert(Node*p,int key){
    Node*t;
    if(p==NULL)
    {
        t=new Node(key);
        
        t->left=t->right=NULL;
        return t;
    }

    if(key>p->data)
        p->right=insert(p->right,key);
    else if(key<p->data)
        p->left=insert(p->left,key);

  return t;
}
void preorder(Node*p){
    if(p==NULL)
        return;
    
    cout<<p->data<<" ";
    preorder(p->left);
    preorder(p->right);
    


}
void inorder(Node*p){
    if(p==NULL)
        return;
    inorder(p->left);
    cout<<p->data<<" ";
    inorder(p->right);
}



int main(){
    
    Node*root=NULL;
    root=insert(root,10);
    insert(root,20);
    insert(root,30);
    cout<<"Preorder : ";
    preorder(root);
    cout<<endl;
    cout<<"Inorder : ";
    inorder(root);
    cout<<endl;

    


}