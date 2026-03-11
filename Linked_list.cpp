#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

class Linked{
    node* head;
    node* tail;
    public:
    Linked(){
        head = tail = NULL;
    }
    
    void insert_front(int value){
        node* newnode = new node();
        newnode->data = value;
        newnode->next = NULL;
        if(head==NULL){
            head = tail = newnode;
        }else{
            newnode->next = head;
            head = newnode;
        }
    }

    void deletion_front(){

        if(head==NULL){
            cout<<"no Node Presents"<<endl;
            return;
        }
        node *temp = head;
        head = head->next;
        delete temp;
    }

    void print(){
        node* temp = head;

        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp = temp->next;
        }
    }
};

int main(){
     Linked ll;
     ll.insert_front(5);
     ll.insert_front(10);
     ll.insert_front(20);
     ll.insert_front(50);
     cout<<"Before Deletion"<<endl;
     ll.print();
     cout<<"After Deletion"<<endl;
     ll.deletion_front();
     ll.print();

     return 0;
     
}