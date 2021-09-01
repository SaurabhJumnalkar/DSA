#include<bits/stdc++.h>
using namespace std;
#include<queue>

int main(){
    //max heap
    priority_queue<int> maxi;
    //min heap
    priority_queue<int,vector<int>,greater<int>> mini;
    
    maxi.push(6);
    maxi.push(5);
    maxi.push(7);
    maxi.push(3);
    maxi.push(7);
    //pushed 4 elements in maxi

    int n=maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    // print 7 6 5 3
    //priority queue gives priority to larger element so it is showing in that way;

    cout<<endl;
    //In mini priority will be to minimum element 
    mini.push(6);
    mini.push(5);
    mini.push(7);
    mini.push(3);
    mini.push(7);

    n=mini.size();
    for(int i=0;i<n;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
    //prints 3 5 6 7 7




}