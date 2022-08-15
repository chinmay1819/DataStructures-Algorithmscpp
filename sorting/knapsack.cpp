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
void bubblesort(struct Element arr[],int n){
   struct Element temp(0,0);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j].profit/arr[j].weight<arr[j+1].profit/arr[j+1].weight)
                {
                    temp=(arr[j]);
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
        }
    }
}
double knapsack(struct Element arr[],float cap,float n){
    float final_val=0;
    float current_weight=0;
    bubblesort(arr,n);
    for(int i=0;i<n;i++){
        if(current_weight+arr[i].weight<=cap){
            final_val+=arr[i].profit;
            current_weight+=arr[i].weight;
        }
        else{
            float remain=cap-current_weight;
            final_val+=arr[i].profit*(double)remain/(double)arr[i].weight;
            break;
        }
    }
    return final_val;
}
int main(){
Element arr[]={{20,10},{35,15},{20,18}};
float n=3;
float cap=20;
cout<<"Max Profit = "<<knapsack(arr,cap,n)<<endl;
}