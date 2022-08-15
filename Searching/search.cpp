#include<bits/stdc++.h>
using namespace std;
int linearsearch(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            return i;
        }
    }
    return -1;
}
int binarysearch(int arr[],int low,int high,int k){
    int mid;
    while(low<high){
        mid=(low+high)/2;
        if(arr[mid]==k){
            return mid;
        }
        else if(arr[mid]>k){
            high=mid;
        }
        else if(arr[mid]<k){
            low=mid+1;
        }
    }
    return -1;
}


int main(){
    int arr[]={10,20,30,40,50,60,70};
    int n=7,low=0,high=6;
    int k;
    cout<<"Enter the element find : ";
    cin>>k;
    cout<<"Result Linear Search : "<<linearsearch(arr,n,k)<<endl;
    cout<<"Result Binary Search : "<<binarysearch(arr,low,high,k)<<endl;

}