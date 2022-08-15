#include<bits/stdc++.h>
using namespace std;

int binarysearch(int nums[],int key,int low,int high){
    if(low>high)
        {return -1;}
    int mid=(low+high)/2;
    if(key==nums[mid])
        {return mid;}
    int index1=binarysearch(nums,key,low,mid-1);
    if(index1!=-1)
        {return index1;}
    int index2=binarysearch(nums,key,mid+1,high);
    if(index2!=-1)
        {return index2;}
    else 
        return -1;}
    

int main(){
    int nums[]={65,67,64,69,63,61,60,62};
    int high=7;
    int low=0;
    int key=69;
    int index=binarysearch(nums,key,low,high);
    cout<<endl<<endl<<"element is present at index "<<index<<endl<<endl;
}