#include<bits/stdc++.h>
using namespace std;
int exp(int a,int n){
    if(n==0){
        return 1;
    }
    int x=exp(a,n/2);
    if(n%2==0){
        return x*x;
    }
    else{
        return a*x*x;
    }
}


int main(){
    int a,n;
    cout<<"Number";
    cin>>a;
    cout<<"Power";
    cin>>n;
    cout<<exp(a,n);
}
//Time Complexity : O(log(n))
//Memory Complexity :O(n)