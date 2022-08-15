#include<bits/stdc++.h>
using namespace std;

void print(int arr[],int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}


void bubblesort(int arr[],int n){

    for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n-1;j++){
        if(arr[i]>arr[j])
            swap(arr[i],arr[j]);
    }
}
cout<<"After implementing Bubble sort "<<endl;
print(arr,n);

}

int binarysearch(int arr[],int key,int l,int h){
    
    int mid;
    while(l<=h){
        mid=(l+h)/2;
        if(arr[mid]==key)
            return mid;
        else if(arr[mid]>key){
            h=mid-1;
        }
        else
            l=mid+1;
    }


return -1;







}




int main(){
    int n=5;
    int arr[]={20,45,10,3,100};
    bubblesort(arr,n);
    cout<<"\n"<<"Searching the element After Sorting "<<endl;
    cout<<binarysearch(arr,45,0,n-1)<<endl;
}