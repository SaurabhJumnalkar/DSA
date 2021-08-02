#include<bits/stdc++.h>
#include<iostream>
using namespace std;
//Check array whether it is sorted in ascending order or not? 
int b[5]={1,3,5,8,79};
int n;
int a[5]={20,45,16,23,57};
int check(int a[],int i){
    if(i+1==n){
        return 1;
    }
    if(a[i]<a[i+1]){
        check(a,i+1);
    }
    else{
        return 0;
    }
}
int main(){
    int i=0;
    n=sizeof(a)/sizeof(a[0]);
    int indicator=check(a,i);
    if(indicator==1){
        cout<<"Sorted";
    }
    else{
        cout<<"Unsorted";
    }
    
}