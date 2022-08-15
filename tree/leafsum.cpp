#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
    int val;
    TreeNode*right;
    TreeNode*left;

    TreeNode(int x){
        val=x;
        right=NULL;
        left=NULL;
    }

   

};
void inorder(TreeNode*root,int &sum){
    if(root==NULL){
        return ;
    }
   
    inorder(root->left,sum);
    if(root->left==NULL && root->right==NULL){
        sum+=root->val;
    }
    inorder(root->right,sum);
}


int levelorder(TreeNode*root,vector<TreeNode*>&v){

    

        queue<TreeNode*>q;
        // cout<<root->val<<" ";
        v.push_back(root);
        q.emplace(root);
        // q.push(NULL);

        while(!q.empty()){
            // int size=q.size();
            
            root = q.front();
            q.pop();
            if(root->left){
                // cout<<root->left->val<<" ";
                v.push_back(root->left);
                q.emplace(root->left);
            }
            if(root->right){
                // cout<<root->right->val<<" ";
                v.push_back(root->right);
                q.emplace(root->right);
            }
        
        }


    int sum=0;
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]->left==NULL && v[i]->right==NULL){
            sum+=v[i]->val;
        }
        else
            break;
    }

return sum;
    

}
void printv(vector<TreeNode*>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]->val<<" ";
    }
}

int main(){
    
    TreeNode*root=new TreeNode(10);
    vector<TreeNode*>v;



    root->left=new TreeNode(20);
    root->right=new TreeNode(30);
    root->left->left=new TreeNode(40);
    root->left->right=new TreeNode(50);
    root->right->left=new TreeNode(60);
    root->right->right=new TreeNode(70);
    int sum=0;
    // inorder(root,sum);
    // cout<<sum<<endl;
    cout<<levelorder(root,v);
    // printv(v);

}