#include<bits/stdc++.h>
using namespace std;

void print(int arr[],int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}

void selectionsort(int arr[],int n){
    int j,k;
    for(int i=0;i<n-1;i++){
        for( j=i,k=i;j<n;j++){
            if(arr[k]>arr[j])
                k=j;
        }
        swap(arr[i],arr[k]);
    }

    print(arr,n);
}

void insertion(int arr[],int n){
    int j,x;
    for(int i=1;i<n;i++){
        j=i-1;
        x=arr[i];

        while(arr[j]>x && j>-1){
            arr[j+1]=arr[j];
            j--;
        }
    arr[j+1]=x;
    }
    print(arr,n);
}

int main(){
    int n=5;
    int arr[]={20,45,10,3,100};
    cout<<"After selection sort "<<endl;
    selectionsort(arr,n);
    cout<<endl<<"After Insertion sort "<<endl;
    insertion(arr,n);

}