#include<bits/stdc++.h>
using namespace std;

void swap(int*a, int* b)
{
    int* c = a;
    a = b;
    b = c;
}


int partition(int arr[],int l,int h){
    int pivot=arr[l];
    int j=arr[h];
    int i=l;
    do{
        do{i++;}while(arr[i]<=pivot);
        do{j--;}while(arr[j]>pivot);

        if(i<j) swap(&arr[i],&arr[j]);
    }while(i<j);
    swap(&arr[l],&arr[j]);

    return j;
}





void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}


void quicksort(int arr[],int l,int h){
    int j;
    if(l<h){
    j=partition(arr,l,h);
    quicksort(arr,l,j-1);
    quicksort(arr,j+1,h);
   }
   
}



int main(){
    int arr[]={21,46,11,325,11,235,22};
    
    int n = 7;
     int l=0,h=n-1;
    quicksort(arr,l,h);
}