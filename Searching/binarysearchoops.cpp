#include<bits/stdc++.h>
using namespace std;
class Search{
    public:
    int arr[20];
    int n;
    int h=n-1;
    int l=0;
    
    public:
    void getdata(){
        int n;
        cout<<"Enter size of the array "<<endl;
        cin>>n;
        int arr[n];
        cout<<"Enter Array elements "<<endl;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
    }

    int binarysearchit(int x){
        int mid;
        while(l<h){
            mid=(l+h)/2;
            if(arr[mid]==x)
                return mid;
            else if(arr[mid]>x)
                h=mid;
            else if(arr[mid]<x)
                l=mid+1;

        }
        return -1;
    }
   

};
int main(){
    Search a1;
    a1.getdata();
    int x;
    cout<<"Enter element to be searched "<<endl;
    cin>>x;

   cout<<"Element is found at index (using iterative method):"<<a1.binarysearchit(x)<<endl;

    cout<<"Element is found at index (using recursion) "<<a1.binarysearchrec(x)<<endl;



}