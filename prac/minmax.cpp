#include<bits/stdc++.h>
using namespace std;


void minmax(int arr[],int l,int h,int &min,int &max){

int mid=(l+h)/2;
    if(l==h){
        if(arr[l]>max)
            min=arr[l];
        if(arr[h]<min)
            max=arr[h];

    return ;
    }

    if(h-l==1){
        if(arr[l]<arr[h]){
            if(min>arr[l])
                min=arr[l];
            if(max<arr[h])
                max=arr[h];    
        }
        else{
            if(min>arr[h])
                min=arr[h];
            if(max<arr[l])
                max=arr[h];    
        }

        return ;

    }


minmax(arr,l,mid,min,max);
minmax(arr,mid+1,h,min,max);


}





























int main(){
    int arr[]={10,2,52,33,11,22};
    int n=6;
    int h=5;
    int l=0;
    int min= INT32_MAX;
    int max=INT32_MIN;
    minmax(arr,l,h,min,max);

    cout<<"mini "<<min<<endl;
    cout<<"max "<<max<<endl;
}