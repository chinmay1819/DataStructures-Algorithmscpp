#include<bits/stdc++.h>
using namespace std;

class BST{
    public:
    int value;
    BST*right;
    BST*left;

    BST(int x){
        value=x;
        right=left=NULL;
    }

};

void preorder(BST*tree){
    if(tree==NULL)
        return ;

    cout<<tree->value<<" ";
    preorder(tree->left);
    preorder(tree->right);     
}



 void inorder(BST*tree){
        if(tree!=NULL){
            inorder(tree->left);
            cout<<tree->value<<" ";
            inorder(tree->rchild);


        }
    }







int mi(BST*tree,int target,int smallest,int keep){
    
    if(tree==NULL){
        // cout<<keep;
        return smallest;
    }
    //  keep=tree->value;
    tree->value=target-tree->value;
    tree->value=abs(tree->value);
    if(keep<smallest)
        smallest=keep;

    mi(tree->left,target,smallest,keep);
    mi(tree->right,target,smallest,keep);

   
 
}

// int lowest(BST*tree,int smallest){
//     if(tree==NULL)
//         return 0;

//     int x,y;
//     x=tree->left->value;
//     y=tree->right->value;
//     if(x>y)
//         smallest=y;
//     else
//         smallest=x;
    
//     lowest(tree->left,smallest);
//     lowest(tree->right,smallest);





// }



void findClosestValueInBst(BST *tree, int target) {
     BST*test=tree;
     int smallest=target-tree->value;
     int keep=tree->value;
     
     
    cout<<"\n"<<mi(test,target,smallest,keep)<<endl;
    
   cout<<"Modified Tree"<<endl;
     preorder(test);
     

   
    



}



int main(){
    BST*tree=new BST(10);
    tree->left=new BST(5);
    tree->right=new BST(15);
    tree->left->left=new BST(2);
    tree->left->right=new BST(5);
    tree->left->left->left=new BST(1);

    tree->right->left=new BST(13);
    tree->right->right=new BST(22);
    tree->right->left->right=new BST(14);

    findClosestValueInBst(tree,12);

    // preorder(tree);
    cout<<"\n";


}
