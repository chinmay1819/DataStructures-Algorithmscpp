#include<bits/stdc++.h>
using namespace std;
int countfrq(string str){
    int hash[123];
    for(int i=0;i<123;i++){
        hash[i]=0;
    }
    int k;
    
    int count=0;

   

    for(int i=0;i<str.length();i++){
        k=int(str[i]);
        hash[k]++;
    }
 
    
    for(int i=0;i<123;i++){
        if(hash[i]==1)
            {   
                count++;
            }

    }    
    return count;

}
int main(){
    string str="aameyz";
    string s="aammaan";
  int doc=countfrq(str);
  cout<<doc;
    int characters=countfrq(s);
    // if(doc<characters)
    //     cout<<"T"
    

}