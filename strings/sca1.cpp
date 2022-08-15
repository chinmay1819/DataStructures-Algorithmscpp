#include<bits/stdc++.h>
using namespace std;

void MakeItCapital(string &str,int i){
    char samp=str[i];
    int f;
    f=int(samp);
    f-=32;
    char p;
    p=char(f);
    str[i]=p;

}


void StringChallenge(string str){
    MakeItCapital(str,0);
    char space=' ';
    for(int i=1;i<str.length();i++){
        if(space==str[i]){
            MakeItCapital(str,i+1);
        }
    }
    cout<<str<<endl;

}



int main(){
    string str;
    getline(cin,str);
    
    StringChallenge(str);
}