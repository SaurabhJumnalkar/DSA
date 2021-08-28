#include<bits/stdc++.h>
using namespace std;

class Stack
{
private:
    int arr[1000];
    int top;
public:
    Stack(){top=-1;};
    void push(int x){
        if(top>=999){
            cout<<"stack overflow";
        }
        else{
            arr[++top]=x;
        }
    }
    int pop(){
        if(top<0){
            cout<<"Stack underflow";
        }
        else{
            return arr[top--];
        }
    }
    int Top(){
        if(top<0){
            cout<<"Stack Underflow";
        }
        else{
            return arr[top];
        }
    }
    bool emty(){
        if(top==-1){
            return true;
        }
        else
        return false;
    }


    
};

int main(){
    class Stack st;
    st.push(10);
    st.push(20);
    cout<<st.pop()<<endl;
    cout<<st.Top()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.emty()<<endl;
}