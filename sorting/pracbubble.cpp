#include<bits/stdc++.h>
using namespace std;

void bsort(int arr[],int n){
    bool swapped;
    for(int i=0;i<n-1;i++){
        swapped=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1])
                {
                    swap(arr[j],arr[j+1]);
                    swapped=true;
                }
        }
        if(swapped==false)
            break;
    }
}

void print(int arr[],int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}

int main(){
    int arr[]={40,50,1,12,33};
    int n=5;
    bsort(arr,n);
    print(arr,n);
}