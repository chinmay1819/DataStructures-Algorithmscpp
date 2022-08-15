#include<bits/stdc++.h>
using namespace std;



int maxele(int *arr,int n){
    int x=arr[0];
    for(int i=1;i<n;i++){
        if(x<arr[i])
            x=arr[i];
    }
    return x;
}


int minele(int *arr,int n){
    int x=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<x)
            x=arr[i];
    }
return x;

}

int minrec(int arr[],int n,int x){
    if(n==0)
        return arr[n];
    
    n=n-1;    
    if(arr[n]>x){
    
        x=arr[n];
        minrec(arr, n, x);
    }    
    return minrec(arr,n,x);

}

int maxrec(int arr[],int n,int x){
    if(n==0)
        return x;
    
    n=n-1;    
    if(arr[n]<x){
    
        x=arr[n];
        maxrec(arr, n, x);
    }    
    return maxrec(arr,n,x);

}






int main(){
    int n;
    cout<<"Enter size of array "<<endl;
    cin>>n;
    int* arr=new int(n);
    cout<<"Enter Array Elements "<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];


    cout<<"Maximum element in the Array is : "<<maxele(arr,n)<<endl;
     cout<<"Minimum element in the Array is : "<<minele(arr,n)<<endl;
         
    int x=arr[n-1];
 cout<<"Maximum element in the Array is : "<<maxrec(arr,n,x)<<endl;
 cout<<"Minimum element in the Array is : "<<minrec(arr,n,x)<<endl;

}