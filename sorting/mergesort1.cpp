#include<bits/stdc++.h>
using namespace std;

void merge(int a[],int l,int mid,int h){
    int n1=mid-l+1;
    int n2=h-mid;
    int lt[n1];
    int rt[n2];
    int t=l;
    for(int i=0;i<n1;i++){
        lt[i]=a[t++];
    }
    t=mid+1;
    for(int i=0;i<n2;i++){
        rt[i]=a[t++];
    }
    int i=0;int j=0;int k=l;
    while(i<n1&&j<n2){
        if(lt[i]<rt[j]){
            a[k++]=lt[i];
            i++;
        }
        else{
            a[k++]=rt[j];
            j++;
        }
    }
    if(i<n1){
        while(i<n1){
            a[k++]=lt[i];
            i++;
        }
    }
    if(j<n2){
        while(j<n2){
            a[k++]=rt[j];
            j++;
        }
    }

}

void mergesort(int a[],int l,int h){
    if(l<h){
        int mid=(l+h)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,h);
        merge(a,l,mid,h);
    }

}

int  main(){
    int a[]={5,421,544,44,97,87,4,89,54,1,548};
    int h=10;
    int l=0;
    mergesort(a,l,h);
    for(int i=0;i<=h;i++){
        cout<<a[i]<<" ";
    }

} 