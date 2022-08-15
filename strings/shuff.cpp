#include<bits/stdc++.h>
using namespace std;

string shuffle(string s,vector<int>indices){
    int l;
    string ans;
    char c='a';
    for(int i=0;i<indices.size();i++){
       ans=ans+c;
    }


    
    for(int i=0;i<=indices.size();i++){
        l=indices[i];
        ans[i]=s[l];

    }

return ans;






}

int main(){
    vector<int>indices={4,5,6,7,0,2,1,3};
    string s="codeleet";
    string sn=shuffle(s,indices);
    cout<<sn;
}