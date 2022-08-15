#include<bits/stdc++.h>
using namespace std;

void insertion(int arr[],int n){
    int j,x;
    for(int i=1;i<n;i++){
        j=i-1;
        x=arr[i];
        while (j>-1 && arr[j]>x)
        {
            arr[j+1]=arr[j];
            j--;
            
        }
        arr[j+1]=x;
        
    }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={8,7,5,3,2,6};
    int n=6;
    insertion(arr,n);
    print(arr,n);
}
