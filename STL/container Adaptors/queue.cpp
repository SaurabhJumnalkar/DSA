#include <bits/stdc++.h>
using namespace std;
#include <queue>

int main()
{
    queue<int> s;
    //FIFO
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    //pushed 4 elements in queue
    //1 2 3 4
    cout << s.front() << endl; // gives front element
    s.pop();
    //2 3 4
    cout << s.front() << endl;
    cout << s.back() << endl; //gives last element

    cout<<s.size()<<endl; //no. of element
}