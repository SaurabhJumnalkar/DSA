#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int value;
    node* next;

    node(int vala){
        value=vala;
        next=NULL;
    }
};
void insertAtStart(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }

    n->next=head;
    head=n;
}




void insertAttail(node* &head,int val){
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
void deletion(node* &head,int val){
    if(head==NULL){
        cout<<"Empty list";
        return;
    }

    if(head->value==val){
        node* todelete=head;
        head=head->next;
        free(todelete);
        return;
    }
    node* temp=head;
    while(temp->next->value!=val){
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    free(todelete);
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->value<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}
int searchin(node* head,int key){
    if(head==NULL){
        return -1;
    }
    node* temp=head;
    while(temp!=NULL){
        if(temp->value==key){
            return 1;
        }
        temp=temp->next;
    }
    return -1;
}

int main(){
    node* head=NULL;
    insertAttail(head,2);
    insertAttail(head,3);
    insertAttail(head,4);
    deletion(head,2);
    insertAtStart(head,10);
    display(head);
    cout<<endl<<searchin(head,1);

    return 0;
}