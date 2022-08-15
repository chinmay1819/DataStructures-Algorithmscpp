#include<bits/stdc++.h>
using namespace std;
void print(int hash[]){
    for(int i=97;i<123;i++)
        {
            cout<<hash[i]<<endl;
        }
}

int lengthOfLongestSubstring(string s) {
        int hash[125]={0};
        int ans=1;
        hash[(int)s[0]]=1;
        for(int i=1;i<s.length();i++){
            if(hash[(int)s[i]]>=1){
                ans=1;
                // continue;
            }
            hash[(int)s[i]]++;
            ans++;
        }
      
        return ans;
        

}



int main(){
    string s="pwwkew";
    cout<<lengthOfLongestSubstring(s)<<endl;
}