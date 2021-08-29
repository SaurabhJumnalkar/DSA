//Search in Strings
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    char c;
    cout<<"Enter Search Element"<<endl;
    cin>>c;
    int index;
    //Find Character
    for(int i=0;i<s.length();i++){
        if(s[i]==c){
            index=i;
            break;
        }
    }
    cout<<index;

}