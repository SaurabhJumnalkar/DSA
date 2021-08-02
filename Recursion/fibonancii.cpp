#include<bits/stdc++.h>
using namespace std;
int a1,a2;

int fibo(int n){
    if(n==a1||n==a2){
        return n;
    }
    else{
        return fibo(n-1)+fibo(n-2);
    }
}    

int main(){
    cout<<"First no.";
    cin>>a1;
    cout<<"Second no.";
    cin>>a2;
    int n;
    cout<<"length";
    cin>>n;
    cout<<fibo(n);
}
//Time Comp. : O(2)^n
//Memory Complexity :O(n)