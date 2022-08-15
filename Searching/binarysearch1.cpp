#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[],int l,int h,int k){
   int mid;
    while(l<h){
        mid=(l+h)/2;
        if(arr[mid]==k)
            return mid;
        if(arr[mid]>k){
            h=mid;
        if(arr[mid]<k)
            l=mid+1;    
        }    
    }
    return -1;
}
int binarysearchrec(int arr[],int l,int h,int k){
    int mid;
    if(l<h){
        mid=(l+h)/2;
        if(arr[mid]==k)
            return mid;
        else if(arr[mid]>k)
            binarysearchrec(arr,l,mid,k);
        else if(arr[mid]<k)
            binarysearchrec(arr,mid+1,h,k);        
    }
    
}


int main(){
    int arr[]={10,20,30,40,50};
    int n=5;
    int l=0,h=4;
    int k=40;
    cout<<"Binary Search "<<binarysearch(arr,l,h,k)<<endl;
    cout<<"Binary Search rec "<<binarysearchrec(arr,l,h,k)<<endl;

}