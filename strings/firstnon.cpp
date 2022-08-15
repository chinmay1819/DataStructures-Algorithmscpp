#include<bits/stdc++.h>
using namespace std;

string first(string s){

char r='%';
for(int i=0;i<s.length();i++){
    if(s[i]==' '){
        s[i]=r;
    }
}

return s;






}
int main(){
    // string s="“I want to work for Raja Software Labs”";
    // cout<<first(s)<<endl;

    // for(int i=0;i<4;i++){
    //     for(int j=0;j<i;j++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<"\n";
    // }
  for(int i=0;i<4;i+=2){
      for(int j=0;j<i+2;j++){
        //   if(i==0){
        //       cout<<"*"<<endl;
        //       continue;
        //   }
        //   else
          cout<<"*"<<" ";
      }
      cout<<"\n";
  }

}