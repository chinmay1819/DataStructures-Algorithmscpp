#include<bits/stdc++.h>
using namespace std;
int unbi(int arr[],int target,int low,int high){
   if(high==low+1)
   {
       if(arr[low]==target) return low;
       if(arr[high]==target) return high;
       return -1;
   }

    else{
        int mid=(high-low)/2;
        int x=unbi(arr,target,low,mid);
        if(x==-1)
            return unbi(arr,target,mid+1,high);
        else
            return x;
        


    }


}
int main(){
    int arr[]={2,1,4,65,44,11,10};
    cout<<unbi(arr,4,0,6)<<endl;
}