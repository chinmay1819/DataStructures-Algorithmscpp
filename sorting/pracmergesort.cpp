#include<bits/stdc++.h>
using namespace std;



void merge(int arr[],int l,int h){
    int mid=(l+h)/2;
    int res[h+1];
    int i=l,j=mid+1,k=l;
    while(i<=mid && j<=h){
        if(arr[i]<arr[j]){
            res[k++]=arr[i++];
        }
        else
            res[k++]=arr[j++];
    }
    while(i<=mid){
        res[k++]=arr[i++];
    }
    while(j<=h){
        res[k++]=arr[j++];
    }
    for(int i=0;i<=h;i++){
        arr[i]=res[i];
    }
}


void mergesort(int arr[],int l,int h){
    int mid;
    if(l<h){
        mid=(l+h)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,h);
        merge(arr,l,h);        
    }
}
int main(){
    int arr[]={4,10,3,1,50,30};
    int n=6;
    int l=0;
    int h=5;
    mergesort(arr,l,h);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}