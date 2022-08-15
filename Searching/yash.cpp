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
int binarysearch(int arr[],int l,int h,int key){
    int mid;
    while(l<h){
        mid=(l+h)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            h=mid;
        }
        else if(arr[mid]<key){
            l=mid+1;
        }
    }
    return -1;
}


int main(){
    int arr[]={2,4,6,8,10};
    int n=5,l=1,h=5;
    int key;
    cout<<"Enter the element find : ";
    cin>>key;
    cout<<"Index at (Linear Search) : "<<linearsearch(arr,n,key)<<endl;
    cout<<"Index at (Binary Search) : "<<binarysearch(arr,l,h,key)<<endl;

}