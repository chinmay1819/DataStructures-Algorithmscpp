#include<bits/stdc++.h>
using namespace std;

int linearsearch(int *arr,int n,int k){
    for(int i=0;i<n;i++){
        if(arr[i]==k)
            return i;
    }
    return -1;
}



int linearsearchrec(int *arr,int n,int k){

    n=n-1;
    if(n<0)
        return -1;
    if(arr[n]==k)
        return n;    
    else
        return linearsearchrec(arr,n,k);



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
    cout<<"Element found at index : "<<linearsearch(arr,n,k)<<endl;
    cout<<"Element found at index (using recursion) : "<<linearsearchrec(arr,n,k)<<endl;
}