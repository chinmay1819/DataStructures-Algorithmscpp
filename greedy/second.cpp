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
void swap(struct Item a,struct Item b){
    struct Item temp(a.value,a.weight);
    b.value=a.value;
    b.weight=a.weight;

    a.value=temp.value;
    a.weight=temp.weight;


}
void bsort(struct Item arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
                // float n1=arr[j].value/arr[j].weight;
                // float n2=arr[j+1].value/arr[j+1].weight;
           if(!cmp(arr[j],arr[j+1]))
                swap(arr[j],arr[j+1]);
        }
    }
    for(int i=0;i<n;i++){
        float k=arr[i].value/arr[i].weight;
        cout<<k<<endl;
    }
}

int knapsack(int W,struct Item arr[],int n){
    int currentw=0;
    double finalvalue=0.0;
    // sort(arr,arr+n,cmp);
    bsort(arr,n);

    for(int i=0;i<n;i++){
        if(currentw+arr[i].weight<=W){
            currentw+=arr[i].weight;
            finalvalue+=arr[i].value;

        }
        else{
            int remain=W-currentw;
            finalvalue+=arr[i].value*(double)remain/(double)arr[i].weight;
            break;
        }

    }


    return finalvalue;



}


int main(){
    Item arr[]={{12,11},{20,11},{78,22},{45,22}};
    int W=50;
    int n=4;

    cout<<knapsack(W,arr,n);
}

