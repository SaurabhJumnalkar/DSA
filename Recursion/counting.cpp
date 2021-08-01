#include<bits/stdc++.h>
using namespace std;
int recur(int n){
    if(n<=0){
        return 0;
    }
    cout<<n;
    cout<<"hi";
    recur(n-1);
}

int main(){
    //a for max number
    int a;
    cin>>a;
    recur(a);
}