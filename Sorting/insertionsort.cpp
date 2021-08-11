#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[6]={12,45,23,51,19,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key,j;
    for(int i=1;i<n;i++){
    key=arr[i];
    j=i-1;
    while(j>=0 && arr[j]>key){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=key;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
