#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{   
    //Dynamic array with 1 datatype for whole array
    vector<int> a;

    cout<<a.size()<<endl; //Return no. of elements in a
    //op:0
    cout<<a.capacity()<<endl;  //return memory size of a
    //op:0

    a.push_back(151);   //Adds one element 151 into vector
    a.push_back(345);     // Adds 2nd element 345 into a
    a.push_back(2156);
    for(int i:a){
        cout<<i<<" ";
    }
    //op:151 345 2156

    cout<<endl;

    a.pop_back();  //removes last added element
    for(int i:a){
        cout<<i<<" ";
    }
    //op:151 345

    cout<<endl;
    vector<int> b(5,1); //creates vector of five 1 elements
    for(int i:b){
        cout<<i<<" ";
    }
    //op: 1 1 1 1 1

    cout<<endl;
    vector<int>c(a);  //cretes duplicate vector equal to a
    for(int i:c){
        cout<<i<<" ";
    }
    //op: 151 345
}