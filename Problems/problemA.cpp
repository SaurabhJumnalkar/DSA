// To find minimum indexed repeated number
// eg.
// 1 3 5 6 5 3 2 1 
// op: 2
// expn: Because 2nd elemnt has low index and also have one repeated element; 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={2,3,5,6,5,3,4,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    //0(n^2) TC
    // int cur,curi,min,counter=0;
    // for(int i=0;i<n;i++){
    //     cur=arr[i];
    //     curi=i;
    //     for(int j=i+1;j<n;j++){
    //         if(cur==arr[j]){
    //                 counter++;
    //                 if(counter==1){
    //                     min=curi;
    //                 }
    //         }
    //     }
    // }
    // cout<<min+1;

    
}