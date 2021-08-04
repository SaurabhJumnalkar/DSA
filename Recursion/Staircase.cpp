/*
If there is staircase and we want to find ways
to go down with the options of jump of 1,2 or 3 stairs.
*/
#include<bits/stdc++.h>
using namespace std;
int steps(int n){
    if(n<0)return 0;
    if(n==0)return 1;
    return steps(n-1)+steps(n-2)+steps(n-3);
}
int main(){
    int n;
    cout<<"no. of Stairs";
    cin>>n;
    cout<<steps(n);
}