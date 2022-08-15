#include<bits/stdc++.h>
using namespace std;
void increase(int arr[],int n){
    for(int i=0;i<3;i++){
        arr[i]=arr[i]+1;
    }
}

void print(int arr[],int n){
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n=3;
    int arr[]={55,44,5};
    increase(arr,n);
    print(arr,n);
}