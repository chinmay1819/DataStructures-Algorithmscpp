#include<bits/stdc++.h>
using namespace std;


struct Element{
    float profit;
    float weight;

    Element(float profit,float weight){
        this->profit=profit;
        this->weight=weight;
    }
};

void sort(struct Element arr[],int n){
   struct Element temp(0,0);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j].profit/arr[j].weight<arr[j+1].profit/arr[j+1].weight)
                {
                    temp=(arr[j]);
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;

                }
        }
    }


}

float knapsack(struct Element arr[],float cap,float n){
    float fval=0;
    float curw=0;
    sort(arr,n);
    for(int i=0;i<n;i++){
        if(curw+arr[i].weight<=cap){
            fval+=arr[i].profit;
            curw+=arr[i].weight;

        }
        else{
            float remain=cap-curw;
            fval+=arr[i].profit*(double)remain/(double)arr[i].weight;
            break;
        }
    }
    return fval;
}








int main(){
Element arr[]={{12,11},{20,11},{78,22},{45,22}};
float n=4;
float cap=50;
cout<<"ans "<<knapsack(arr,cap,n)<<endl;
}