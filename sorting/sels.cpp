#include<bits/stdc++.h>
using namespace std;

int smallest(int arr[],int n,int j){
    int small=arr[j];
    for(int i=j+1;i<n;i++){
        if(arr[i]<small)
            small=arr[i];
    }
    for(int i=0;i<n;i++){
        if(small==arr[i])
            return i;
    }
    return -1;

}

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
    int arr[]={2,5,1,33,12,6};
    int n=6;

    for(int j=0;j<n;j++){
    int k=smallest(arr,n,j);
    swap(arr[k],arr[j]);
    }
    print(arr,n);
    
}