#include<bits/stdc++.h>
using namespace std;
int recur(int n){
    if(n<=0){
        return 0;
    }
    recur(n-1);
    cout<<n;
   
}

int main(){
    //a for max number
    int a;
    cin>>a;
    recur(a);
}