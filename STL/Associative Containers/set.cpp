#include<bits/stdc++.h>
using namespace std;
#include<set>
//BTS it is Implemented by using BST
//Ordered set: Sorted,unique,modification can't be done,slower than unordered set.

int main(){
    set<int> s;
    s.insert(5);
    s.insert(3);
    s.insert(2);
    s.insert(4);
    s.insert(4); //0(logn)
    for(int i:s){
        cout<<i<<" ";
    }
    //Prints 2 3 4 5

    set<int>::iterator it=s.begin();//0(1) //object like a pointer used to point a specific element
    s.erase(it);//0(logn) 
    cout<<endl;
    for(int i:s){
        cout<<i<<" ";
    }
    //prints 3 4 5

    cout<<endl<<s.count(4)<<endl;//returns 4 is present or not
    //0(logn)
    set<int>::iterator itr=s.find(4); //will point to 4
    //0(logn)
    cout<<*itr;
    //prints 4


}
