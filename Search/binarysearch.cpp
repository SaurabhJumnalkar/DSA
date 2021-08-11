#include<bits/stdc++.h>
using namespace std;

int BS(int arr[],int s,int e,int x){
    if(s>e){
        return -1;
    }
    int mid=(s+e)/2;
    if(arr[mid]==x){return mid;};
    if(arr[mid]>x){e=mid-1;};
    if(arr[mid]<x){s=mid+1;};
    BS(arr,s,e,x);
}

int main(){
    int arr[5]={20,23,34,45,76};
    int x=20;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<BS(arr,0,n-1,x);
}