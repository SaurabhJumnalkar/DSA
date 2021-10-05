#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int value;
    node* next;

    node(int val){
        value=val;
        next=NULL;
    }
};

void push(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }

    
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
int pop(node* &head){
    if(head==NULL){
        return -1;
    }

    node *temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    node *todelete=temp->next;
    temp->next=NULL;
    int popp=todelete->value;
    free(todelete);
    return popp;
}

int main(){
    node* head=NULL;
    push(head,1);
    push(head,2);
    push(head,3);
    push(head,4);
    cout<<pop(head);
    cout<<pop(head);
    cout<<pop(head);

}