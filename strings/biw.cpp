#include<bits/stdc++.h>
using namespace std;
int count(string message){
    int k=0;
    char s=' ';
    for(int i=0;i<message.length();i++)
     {
         if(message[i]==s)
           k++;
     }
     return k+1;
}



 void largestWordCount(vector<string>& messages, vector<string>& senders) {
        vector<int>messcount;
  
    for(int i=0;i<messages.size();i++)
       {
            int m=count(messages[i]);
            messcount.push_back(m);
        }

    // for(int i=0;i<messcount.size();i++)
    //     cout<<messcount[i]<<" ";

    pair<string,int>m;
    for(int i=0;i<senders.size();i++){
        m.insert({senders[i],messcount[i]});
    }
 
    for(auto ){
        cout<<x.first<<" "<<x.second<<endl;
    }

 }       



int main(){
    // string message="How";

    vector<string>messages={"Hello userTwooo","Hi userThree","Wonderful day Alice","Nice day userThree"};
    vector<string>senders={"Alice","userTwo","userThree","Alice"};
    largestWordCount(messages,senders);


}