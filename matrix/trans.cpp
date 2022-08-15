#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>>res;
        int m=matrix[0].size();
        int ans[matrix.size()][m];
        
        for(int i=0;i<m;i++){
            for(int j=0;j<matrix.size();j++){
                
                ans[i][j]=matrix[j][i];
            }
        }
      
       
       for(int i=0;i<m;i++){
           vector<int>temp;
           for(int j=0;j<matrix.size();j++){
               temp.push_back(ans[i][j]);
           }
           res.push_back(temp);
       }
       
       
        return res;
}

int main(){
    vector<vector<int>>matrix={{1,2,3},
            {4,5,6}
            
        };
        vector<vector<int>>res=transpose(matrix);
        int m=matrix[0].size();
        int k=matrix.size();
        for(int i=0;i<m;i++){
            for(int j=0;j<k;j++)
                cout<<res[i][j]<<" ";
            cout<<"\n";
        }
}