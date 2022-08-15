#include<bits/stdc++.h>
using namespace std;

// void merge(int arr[],int l,int mid,int h){
//     // int mid=(l+h)/2;
//     int i=l,j=mid+1;
//     int res[h+1];
//     int k=0;

//     while(i<mid && j<h+1){
//         if(arr[i]<arr[j]){
//             res[k++]=arr[i++];
//         }
//         else{
//             res[k++]=arr[j++];
//         }
//     }
//     while(i<=mid){
//         res[k++]=arr[i++];
//     }
//     while(j<=h){
//         res[k++]=arr[j++];
//     }
//     for(int m=0;m<h+1;m++){
//         arr[m]=res[m];
//     }
// }
void mrohit(int arr[],int l,int mid,int h){
    int first[mid-l+1];
    int ss=h-mid;
    int second[ss];
    int t=l;
    int res[h+1];
    for(int i=0;i<mid-l+1;i++){
        first[i]=arr[t++];
    }
    t=mid+1;
    for(int j=mid+1;j<ss;j++){
        second[j]=arr[t++];
    }
    int i=0,j=0,k=l;

    while(i<mid && j<h){
        if(first[i]<second[i])
            res[k++]=first[i++];

        else{
            res[k++]=second[j++];
        }


    }


    for(;i<mid+1;i++){
        res[k++]=first[i];
    }
    for(;j<h+1;j++){
        res[k++]=second[j];
    }


   for(int m=0;m<h+1;m++){
        arr[m]=res[m];
    }
}





void mergesort(int arr[],int l,int h){
    if(l<h){
        int mid=(l+h)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,h);
        mrohit(arr,l,mid,h);
    }
}




int main(){
    int arr[]={10,2,3,44,1};
    int n=5;
    int l=0,h=4;
    mergesort(arr,l,h);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}