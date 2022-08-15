#include<bits/stdc++.h>
using namespace std;
char findTheDifference(string s, string t) {
       int hash[125]={0};
        for(int i=0;i<100;i++)
        {
            hash[(int)s[i]]++;
        }
        int hash1[125]={0};
        for(int i=0;i<100;i++)
        {
            hash1[(int)t[i]]++;
        }
        char res;
        for(int i=95;i<125;i++){
            if(hash[i]!=hash1[i])
                {res=(char)i;
                    break;
                }
        }
    return res;
 }
int main(){
    string s="abcd",t="abcde";
    findTheDifference(s,t);
    
}