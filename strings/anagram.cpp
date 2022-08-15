#include<bits/stdc++.h>
using namespace std;

bool isAna(string s,string r){
//  vector<int>sa;
//  vector<int>ra;
//  int x;
//  for(int i=0;i<s.length();i++){
//      x=int(s[i]);
//      sa[x]++;
//  }    
//   for(int i=0;i<r.length();i++){
//      x=int(r[i]);
//      ra[x]++;
//  }
//  int n=max(sa.size(),ra.size());
//  for(int i=0;i<n;i++){
//      if(sa[i]!=ra[i]) return false;
//  }


// return true;

// sort(s.begin(),s.end());
// sort(r.begin(),r.end());
// for(int i=0;i<s.size();i++)
// {
//     if(s[i]!=r[i]) return false;
// }
// return true;


vector<int>sa;
vector<int>ra;
int x;
for(int i=0;i<s.length();i++){
    x=int(s[i]);
    cout<<x<<endl;
    sa.push_back(x);
}

int y;
cout<<"============"<<endl;
for(int i=0;i<r.length();i++){
    y=int(r[i]);
    cout<<y<<endl;
    ra.push_back(y);
}


int mm=*max_element(sa.begin(),sa.end());
int pp=*max_element(ra.begin(),ra.end());



int hashs[mm+1];
int hashr[pp+1];
for(int i=0;i<mm+1;i++){
    hashs[i]=0;
}
for(int i=0;i<pp+1;i++){
    hashr[i]=0;
}
for(int i=0;i<sa.size();i++){
    hashs[sa[i]]++;
}
for(int i=0;i<ra.size();i++){
    hashr[ra[i]]++;
}
int n=max(mm,pp);
for(int i=0;i<n;i++){
    if(hashs[i]!=hashr[i]) return false;
}




return true;

}

int main(){
    string s="abc";
    string r="bac";
    string q="xac";
    cout<<isAna(s,q)<<endl;
}