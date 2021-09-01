#include<bits/stdc++.h>
using namespace std;
#include<map>
//BTS uses red black tree and balanced tree
int main(){
    map<int,string> m;
    //key  value
    m[1]="Dhoni";
    m[2]="Kohli";
    m[12]="Dhawan";
    m.insert({5,"Sharma"}); //insert like above //0(logn)
    for(auto i:m){    //auto:automatically deduce data type
        cout<<i.first<<" ";
    }
    //print keys
    cout<<endl;
    for(auto i:m){    //auto:automatically deduce data type
        cout<<i.second<<" ";
    }
    //print values
    cout<<endl<<m.count(12)<<endl; //0(logn)//returns no. of elements present with this key but here this is not multimap so it will return 0 or 1
    //print 1

    m.erase(12); //0(logn) //erase key value pair of key=12
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
}