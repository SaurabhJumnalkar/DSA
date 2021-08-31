#include<bits/stdc++.h>
using namespace std;
#include<stack>

int main(){
    stack <int> s;
    //LIFO structure
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    //pushed 4 elements on stack and 4 is on top 
    cout<<s.top()<<endl; //will print 4 

    s.pop();//popped top element
    cout<<s.top()<<endl; //will print 3

    cout<<s.size()<<endl; //Stack size
    
    cout<<s.empty()<<endl; //return 0 if stack is not empty else return 1
}