#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int l,int h,int k){
    int mid;
    if(l<h){
        mid=(l+h)/2;
        if(arr[mid]==k)
            return mid;

        binarySearch(arr,l,mid,k);
        binarySearch(arr,mid+1,h,k);    
        
    }
}

int main(){
    int arr[]={60,70,50,65,50,66};
    int l=0;
    int h=5;
    int k=60;
    cout<<binarySearch(arr,l,h+1,k);
}