//Finally Understood the logic of linked list took longer than expected time
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

    void insert_back(int value){
        node* newnode = new node();
        newnode->data = value;
        newnode->next = NULL;
        if(tail==NULL){
            head = tail = newnode;
            return;
        }

        tail->next = newnode;
        tail=newnode;
        
    }
    void deletion_back(){
        if(tail==NULL){
            cout<<"Linked list is empty"<<endl;
            return;
        }else{
            node* temp = head;

            while(temp->next != tail){
                temp = temp->next;
            }
            delete tail;
            tail = temp;
            tail->next = NULL;
        }
    }

    void insert_at_pos(int val,int pos){
        node* newnode = new node();
        newnode->data = val;
        
        if(pos == 1){
            newnode->next = head;
            head = newnode;
        }
      node* temp = head;
       for(int i = 1; i<pos-1; i++){
              
          temp = temp->next;
            }
      newnode->next =  temp->next;
      temp->next = newnode;

        
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
     ll.deletion_front();
     ll.insert_front(5);
     ll.insert_front(10);
     ll.insert_front(20);
     ll.insert_front(50);
     cout<<"Before Deletion"<<endl;
     ll.print();
     cout<<"After Deletion"<<endl;
     ll.deletion_front();
     ll.print();
     cout<<"Inserting from back"<<endl;
     ll.insert_back(100);
     ll.print();
     cout<<"Deletion from back"<<endl;
     ll.deletion_back();
     ll.print();
     cout<<"Inserting at position"<<endl;
     ll.insert_at_pos(17,2);
     ll.print();

     return 0;
     
}