#include<bits/stdc++.h>
using namespace std;
string numbers[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
int spell(int n){
    //Base Case 
    if(n==0){
        return 0;
    }
    //recursively call no. divided by 10
    spell(n/10);
    //print the string at the place of unit digit of no.
    cout<<numbers[n%10]<<" ";
}

int main(){
    int n;
    cin>>n;
    spell(n);
}
