#include<bits/stdc++.h>
using namespace std;

class Queue{
    public:
    int arr[5];
    int front,rear;

    Queue(){
        front=-1;
        rear=-1;
    }
    void enque(int val){
        if(front==-1 && rear==-1){
            front+=1;
            rear+=1;
            arr[rear]=val;
            return;
        }
        arr[++rear]=val;
    }
    int deque(){
        if(front==-1){
            return -1;
        }
        return arr[front++];
    }
    void traverse(){
        int a=front;

        while(a<=rear){
            cout<<arr[a]<<" ";
            a++;
        }
    }
};


int main(){
    class Queue q;
    q.enque(1);
    q.enque(2);
    q.enque(3);
    q.enque(4);
    q.traverse();
    cout<<endl<<q.deque()<<endl;
    cout<<q.deque();
}