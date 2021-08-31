//List in STL uses Doubly linked list
#include<bits/stdc++.h>
using namespace std;
#include<list>

int main(){
    list<int> n;

    n.push_back(1); //push at back
    n.push_front(2); // push at front

    for(int i:n){
        cout<<i<<" ";
    }
    //prints 2 1
    
    n.erase(n.begin());
    // erases 2
    cout<<endl<<"After erase"<<endl;
    for(int i:n){
        cout<<i<<" ";
    }

    n.push_back(3); 
    // list is now 1 3
    n.pop_front();
    cout<<endl<<"After pushing 3 at back and then pop at front"<<endl;
    for(int i:n){
        cout<<i<<" ";
    }

    cout<<endl<<n.size();

    cout<<endl<<"new list "<<endl;
    list<int> s(10,2); // give list of 10 elements equal to 2 
    for(int i:s){
        cout<<i<<" ";
    }
    //print 2 2 2 2 2 2 2 2 2 2
}