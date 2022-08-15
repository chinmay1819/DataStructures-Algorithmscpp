#include<bits/stdc++.h>
using namespace std;


 bool isValid(string s) {

     stack<char>p;
     p.push(s[0]);
     for(int i=1;i<s.length();i++){
     if((p.top()=='(' || p.top()=='{' || p.top()=='[' )&& (s[i]==')' || s[i]==']' || s[i]=='}') )
    {
        if(p.top()=='(' && s[i]==')')
        {
            p.pop();
        }
        else if(p.top()=='{' && s[i]=='}')
        {
            p.pop();
        }
        else if(p.top()=='[' && s[i]==']')
        {
            p.pop();
        }

    }
    else 
        p.push(s[i]);

     }

     if(p.empty())
        return true;



return false;



}


int main(){
    string s="(){}[]";
    cout<<isValid(s)<<endl;
}