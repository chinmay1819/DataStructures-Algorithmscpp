#include<bits/stdc++.h>
using namespace std;

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void selection(int arr[],int n){
    int i,j,k;
    
    for(int i=0;i<n-1;i++){
        for(j=k=i;j<n;j++){
            if(arr[k]>arr[j])
                k=j;
        }
        swap(arr[i],arr[k]);
    }

}





int main(){
    int arr[]={2,5,1,8,7,6};
    int n=6;
    print(arr,n);
    cout<<"After sorting"<<endl;
    selection(arr,n);
    print(arr,n);

}