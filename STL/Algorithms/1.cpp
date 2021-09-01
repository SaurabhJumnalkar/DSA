#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(9);
    cout<<binary_search(v.begin(),v.end(),9)<<endl;
    //Perform Binary search and print 1 as 9 is present
    cout<<lower_bound(v.begin(),v.end(),4)-v.begin()<<endl;
    //Gives lower bound
    cout<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;
    //Gives upper bound
    for(auto i:v){
        cout<<i<<" ";
    }
    rotate(v.begin(),v.begin()+1,v.end());//rotate
    cout<<endl<<"after rotation"<<endl;
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"sorting"<<endl;
    //Sort done by intro sort 
    //combination of 3 sorting algos quicksort,heapsort,insertion sort
    sort(v.begin(),v.end()); //on average 0(nlogn)
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    int a=9,b=10;
    cout<<max(a,b)<<endl;
    //return max element
    cout<<"a:"<<a<<endl;//print 9
    swap(a,b); //swap elements
    cout<<"a:"<<a<<endl;//print 10

    string s="abcd";
    reverse(s.begin(),s.end()); //reverse string
    cout<<s<<endl; //print dcba

    
}