#include<bits/stdc++.h>
using namespace std;

int perm(string s,int index){
    if(index>=s.length()){
        cout<<s<<endl;
        return 0;
    }
    for(int i=index;i<s.length();i++){
        swap(s[index],s[i]);
        perm(s,index+1);
        //backtracking
        swap(s[i],s[index]);
    }
}


int main(){
    string s;
    cin>>s;
    perm(s,0);
}