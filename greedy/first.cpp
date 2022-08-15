#include<bits/stdc++.h>
using namespace std;

struct Item{
  int value,weight;

  Item(int value,int weight){
    this->value=value;
    this->weight=weight;

  }
};

bool cmp(struct Item a,struct Item b){
  double ratio1=(double)a.value/(double)a.weight;
  double ratio2=(double)b.value/(double)b.weight;
  return (ratio1>ratio2);
}


double fractionalknapsack(int W,struct Item arr[],int n){
  sort(arr,arr+n,cmp);
  int currentweight=0;
  double finalvalue=0.0;

  for(int i=0;i<n;i++){
    if(currentweight+arr[i].weight<=W){
      currentweight+=arr[i].weight;
      finalvalue+=arr[i].value;

    }
    else{
      int remain=W-currentweight;
      finalvalue+=arr[i].value*((double)remain/(double)arr[i].weight);
      break;
    }
  }
  return finalvalue;
}

int main(){
  Item arr[]={{60,20},{50,25},{20,60}};
  int n=sizeof(arr)/sizeof(arr[0]);
  int W=50;
  fractionalknapsack(W,arr,n);


















  
  cout<<"110"<<endl;
}