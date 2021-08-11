#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[6]={12,45,23,51,19,8};
    
    int e=sizeof(arr)/sizeof(arr[0]);
    e=e-1;
    for(int i=0;i<=e;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    int counter=0;
    while(counter<=e){
        for(int i=0;i<e-counter;i++){
            if(arr[i]>arr[i+1]){
                int z=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=z;
            }
        }
        counter+=1;
    }
    for(int i=0;i<=e;i++){
        cout<<arr[i]<<" ";
    }
}