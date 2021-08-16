#include<bits/stdc++.h>
using namespace std;
#include<array>
int main(){
    array<int,6> a={1,2,3,4,5,6}; //static,sequential,only one datatype in whole array
    cout<<a[1]<<endl;
    //o/p:2
    //accessed in O(1)
    
    cout<<a.at(2)<<endl;
    //op:3

    cout<<a.empty()<<endl; //gives boolean value
    //op:0

    cout<<a.front()<<endl; //element at 0th index
    //op:1 

    cout<<a.back()<<endl;  //element at last index
    //op:6

    cout<<a.size()<<endl;  // Gives total element in a
    //op:6
    cout<<sizeof(a);  // Gives size of a
    //op:24
}