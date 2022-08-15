#include<bits/stdc++.h>
using namespace std;

void print(int arr[],int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}


void insertionsort(int arr[],int n){
    int j,x;
    for(int i=1;i<n;i++){
        j=i-1;
        x=arr[i];
        while(j>-1 && arr[j]>x){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=x;

    }
    cout<<"After Insertion sort :"<<endl;
    print(arr,n);
}


int main(){
    int n=5;
    int arr[]={20,45,10,3,100};
    insertionsort(arr,n);
}