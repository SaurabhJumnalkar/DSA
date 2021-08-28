#include<bits/stdc++.h>
using namespace std;

int selection(int arr[],int min,int e){
    for(int i=0;i<e-1;i++){
        for(int j=i+1;j<e;j++){
            if(arr[i]>arr[j]){
                int z=arr[i];
                arr[i]=arr[j];
                arr[j]=z;
            }
        }
    }
    for(int i=0;i<e;i++){
        cout<<arr[i]<<" ";
    }

}

int main(){

    int arr[6]={12,45,23,51,29,8};
    int e=sizeof(arr)/sizeof(arr[0]);
    cout<<"Sorted Array"<<endl;

    selection(arr,0,e);
}