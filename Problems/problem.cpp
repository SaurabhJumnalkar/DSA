//Find No .of Choclates eaten if for 1rs. there is 1 choclate and from 3 wrappers we get one choclate


#include<bits/stdc++.h>
using namespace std;
int choc(int wrapper,int count){
    if(wrapper<3){
        return count;
    }
    int reminder=wrapper%3;
    int division=wrapper/3;
    wrapper=reminder+division;
    count+=division;
    choc(wrapper,count);
}

int main(){
    int rs,wrapper,count=0;
    cin>>rs;
    wrapper=rs;
    count=rs;
    cout<<choc(wrapper,count);
}