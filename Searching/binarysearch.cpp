#include<bits/stdc++.h>
using namespace std;

int binarysearchrec(int *arr,int l,int h,int k){
    int mid=(l+h)/2;
    if(arr[mid]==k)
        return mid;
    if(arr[mid]<k)
        return binarysearchrec(arr,mid+1,h,k);


  return binarysearchrec(arr,l,mid,k);        

}

int binarysearch(int *arr,int l,int h,int k){
    int mid;
  
    while(l<=h){
        mid=l+(h-l)/2;
         if(arr[mid]==k)
            return mid;
        if(arr[mid]>k)
            h=mid;
        else if(arr[mid]<k)
            l=mid+1;    
    } 
   
    return -1;

}
int main(){
    int n;
    cout<<"Enter size of array "<<endl;
    cin>>n;
    int* arr=new int(n);
    cout<<"Enter Array Elements "<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int k;
    cout<<"Enter element to be searched"<<endl;
    cin>>k;
    int l=0;
    int h=n-1;
    cout<<"Element found at index : "<<binarysearch(arr,l,h,k)<<endl;
    cout<<"Element found at index (using recursion) : "<<binarysearchrec(arr,l,h,k)<<endl;
}