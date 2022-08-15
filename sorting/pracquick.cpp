#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int l,int h){
    int pivot=arr[l];
    int i=l;
    int j=h;
    
    do{
        do{i++;}while(arr[i]<=pivot);
        do{j--;}while(arr[j]>pivot);
        if(i<j) swap(arr[i],arr[j]);

    }while(i<j);
    swap(arr[j],arr[l]);

    return j;
}



void quicksort(int arr[],int l,int h){
    int j;
    if(l<h){
        j=partition(arr,l,h);
        quicksort(arr,l,j);
        quicksort(arr,j+1,h);

    }
}


int main(){
int arr[]={50,70,60,90,40,INT32_MAX};
int l=0;
int h=5;
quicksort(arr,l,h);
for(int i=0;i<h;i++){
    cout<<arr[i]<<" ";
}
}