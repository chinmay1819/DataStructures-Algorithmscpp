#include<bits/stdc++.h>
using namespace std;

struct Item{
    int weight,profit;
    
    Item(int weight,int profit){
        this->profit=profit;
        this->weight=weight;

    }
};
void bsort(struct Item arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j].profit/arr[j].weight < arr[j+1].profit/arr[j+1].weight){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

float knapsack(struct Item arr[],int n,int cap){
    int cw=0;
    float cp=0.0;
    bsort(arr,n);
    for(int i=0;i<n;i++){
        if(cw+arr[i].weight<=cap){
            cw+=arr[i].weight;
            cp+=arr[i].profit;
        }
        else{
            int re=cap-cw;
            cp+=(double)arr[i].profit*(double)re/(double)arr[i].weight;
            break;
        }
    }
    return cp;

}



int main(){
 struct Item arr[]={{10,2},{5,3},{15,5},{7,7},{6,1},{18,4},{3,1}};
 int n=4;
 int cap=20;
 cout<<knapsack(arr,n,cap)<<endl;
}