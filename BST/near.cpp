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
void print(vector<int>v){
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
}




void inorderrec(BST*tree,vector<int>&vim){

    if(tree==NULL)
        return ;

    inorderrec(tree->left,vim);
    vim.push_back(tree->value);
    inorderrec(tree->right,vim);


}

int findClosestValueInBst(BST*tree,int target){
    

vector<int>vim;
inorderrec(tree,vim);



vector<int>ans;
int x;
for(int i=0;i<vim.size();i++){
    x=target-vim[i];
    x=abs(x);
    ans.push_back(x);
}

int small=ans[0];
int index=0;
for(int i=1;i<ans.size();i++){
    if(small>ans[i]){
        small=ans[i];
        index=i;
    }
}




return vim[index];
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

    cout<<findClosestValueInBst(tree,12)<<endl;

    // preorder(tree);
    

}