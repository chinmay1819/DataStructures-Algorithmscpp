#include<bits/stdc++.h>
using namespace std;

void printv(vector<char>res){
    for(int i=0;i<res.size();i++){
        cout<<res[i];
    }
}

string interpret(string command) {
        
        vector<char>res;
        char G='G';
        char al1='(';
        char al2=')';
        char a='a';
        char l='l';
        char o='o';
        
        for(int i=0;i<command.length();i++){
            if(command[i]==G)
                res.push_back(G);
            else if(command[i]==al1 && command[i+1]==a && command[i+2]==l && command[i+3]==al2)
            {
                res.push_back(a);
                res.push_back(l);
            }
            else if(command[i]==al1 && command[i+1]==al2)
                res.push_back(o);
                       
        }
        
        string ans(res.begin(),res.end());
        return ans;
    }



void print(string ans){
        for(int i=0;i<ans.length();i++){
            cout<<ans[i];
        }

}



int main(){
    string command="G()()()()(al)";
    string ans=interpret(command);
    cout<<"\nAns :\n";
    print(ans);
}