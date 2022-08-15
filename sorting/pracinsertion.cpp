#include<bits/stdc++.h>
using namespace std;

void insertionsort(int arr[],int n){
    int x;
    for(int i=1;i<n;i++){
        x=arr[i];
        int j=i-1;
        while(j>-1 && arr[j]>x){
            arr[j+1]=arr[j];
            j--;

        }
        arr[j+1]=x;
    }
}

void print(int arr[],int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}

int main(){
    int arr[]={40,0,10,1,20};
    int n=5;
    insertionsort(arr,n);
    print(arr,n);
    
}