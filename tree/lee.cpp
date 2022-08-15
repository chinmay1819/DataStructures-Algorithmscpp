#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
    int data;
    Node*rchild;
    Node*lchild;

    Node(int x){
        data=x;
        rchild=lchild=NULL;
    }

};

void inorder(Node*root){
    if(root==NULL){
        return ;
    }

    inorder(root->lchild);
    cout<<root->data<<" ";
    inorder(root->rchild);
}


void preorder(Node*root){
    if(root==NULL)
        return ;

    cout<<root->data<<" ";
    preorder(root->lchild);
    preorder(root->rchild);     

}

int main(){
    Node*root=new Node(1);
    root->lchild=new Node(2);
    root->rchild=new Node(3);
    preorder(root);
    cout<<"\n";

    cout<<"inorder : ";
    inorder(root);


}















