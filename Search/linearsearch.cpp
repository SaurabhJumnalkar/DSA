#include<bits/stdc++.h>
using namespace std;

int ls(int arr[],int key,int n){
    
    for(int i=0;i<n;i++){
        if(key==arr[i]){
            return i;
        }
    }
    return -1;
}


int main(){
    int arr[]={1,2,3,4,5,6,8,9};
    int key=5;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<ls(arr,key,n);

}