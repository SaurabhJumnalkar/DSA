#include<bits/stdc++.h>
using namespace std;
#include<deque>

int main(){
    deque<int> s;
    s.push_back(1); //push 1 from back
    s.push_front(2); //push 2 from front
    //now deque is 2 1
    cout<<s.front()<<endl;//gives front element
    cout<<s.back()<<endl; //gives last element

    cout<<"SIZEA"<<s.size()<<endl;
    s.clear();   //removes all elements
    cout<<s.size()<<endl;

    s.push_back(1); //push 1 from back
    s.push_front(2); //push 2 from front
    cout<<s[1]; //gives element at index 1
    cout<<s.at(1); //gives element at index 1

    s.pop_back(); //pop last element
    //1 is popped
    s.pop_front(); //pop first element
    //2 is popped






}