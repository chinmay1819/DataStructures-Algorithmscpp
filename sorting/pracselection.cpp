#include<bits/stdc++.h>
using namespace std;




void selectionsort(int arr[],int n){
    int i,j,k;
    
    for(int i=0;i<n-1;i++){
        for(j=k=i;j<n;j++){
            if(arr[k]>arr[j])
                k=j;
        }
        swap(arr[i],arr[k]);
    }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}

int main(){
    int arr[]={40,50,0,12,20,1};
    int n=6;
    selectionsort(arr,n);
    print(arr,n);
    
}