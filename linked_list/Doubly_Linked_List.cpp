#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* prev;
 
    Node(int val){
       data = val;
       next = prev = NULL;
    }
};

class Linked_List{
    Node* head;
    Node* tail;

    public:
      Linked_List(){
        head = tail = NULL;
      }
      //Inserting at Front

      void Insert_at_Front(int val){
        Node* newnode = new Node(val);

        if(head == NULL){
            head = tail = newnode;
        }else{
           newnode->next = head;
           head->prev = newnode;
           head = newnode;
        }
        
      }

      //Deletion From Back

      void Deletion_from_Front(){
        if(head==NULL){
            cout<<"Linked List is Empty!"<<endl;
            return;
        }
        Node* temp = head;
        if(head == tail){
          head = tail = NULL;
          delete temp;
          return;
        }
        Node* nextnode = temp->next;
        nextnode->prev = NULL;
        head = temp->next;
        delete temp;
        cout<<"Deletion Successfully"<<endl; 
      }

      //Inserting from back 

      void Insert_from_back(int val){
        Node* newnode = new Node(val);
        if(head == NULL){
          head = tail = newnode;
        }else{
         
         newnode->prev = tail;
         tail->next = newnode;
         tail = newnode;
         return;
        }
      }

      //Deletion from back

      void Deletion_From_back(){
        if(head == NULL){
            cout<<"Linked List is Empty!!"<<endl;
            return;
        }
        Node *temp = tail;
        if(head == tail){
            head = tail = NULL;
        }else{
            tail = tail->prev;
        tail->next = NULL;
        }
        delete temp;
        
      }

      //Inserting at pos
      void Insert_at_pos(int val,int pos){
        if(pos<1){
            cout<<"invalid Position";
            return;
        }
       
        if(head==NULL){
            Insert_at_Front(val);
            return;
        }
        if(pos == 1){
            Insert_at_Front(val);
            return;
        }
        Node* temp = head;
        int idx = 1;
        for(int i = 1;i<pos-1&& temp!= NULL;i++){
            temp = temp->next;
            idx++;
        }
        if(temp->next == NULL){
            cout<<"out of range"<<endl;
            return;
        }
        if(temp==tail){
            Insert_from_back(val);
            return;
        }
        Node* newnode =  new Node(val);
        Node* nextnode = temp->next;
        newnode->prev= temp;
        nextnode->prev = newnode;
        temp->next = newnode;
        newnode->next = nextnode;
        
      }

      //Deletion From Position


      void Deletion_From_Pos(int pos){
        if(pos<1){
            cout<<"Inavlid Position??"<<endl;
            return;
        }
        if(pos == 1){
            Deletion_from_Front();
            return;
        }
        Node *temp = head;
        
        for(int i = 1;i<pos-1 && temp != NULL;i++){
           temp = temp->next;
        }
        if(temp->next == NULL || temp ==NULL ){
            cout<<"out of range"<<endl;
            return;
        }
        Node* delnode = temp->next;
        
        if(delnode==tail){
            temp->next=NULL;
            tail = temp;
        }else{
            Node* nextnode = delnode->next;
            temp->next = nextnode;
            if(nextnode != NULL){
            nextnode->prev = temp;
        }
        }
        
        delete delnode;
      }

      //Treversing

      void Find_Target(int target){
        if(head == NULL){
            cout<<"LinkedList is empty"<<endl;
            return;
        }
        int idx = 1;
        Node* temp = head;
        while(temp!= NULL){
            if(temp->data == target){
                cout<<"Our Value is presented at node "<<idx<<endl;
                return;
            }
            temp = temp->next;
            idx++;
        }
        cout<<"Value not present in Linked List"<<endl;
      }
      //Displaying 

      void Display(){
        Node* temp = head;

        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp = temp->next;
        }
      }
};

int main(){
    Linked_List dll;
    dll.Insert_at_Front(10);
    dll.Insert_at_Front(20);
    dll.Insert_at_Front(30);
    dll.Insert_at_Front(40);
    dll.Insert_at_Front(50);

    dll.Display();
    cout<<"Deletion from Front"<<endl;
    dll.Deletion_from_Front();
    dll.Display();
    cout<<"Insertion from Back"<<endl;
    dll.Insert_from_back(40);
    dll.Display();
    cout<<"Deleting from Back"<<endl;
    dll.Deletion_From_back();
    dll.Display();
    cout<<"Inserting at Pos"<<endl;
    dll.Insert_at_pos(50,2);
    dll.Display();
    cout<<"Finding Target"<<endl;
    dll.Find_Target(10);
    cout<<"Deleting from position"<<endl;
    dll.Deletion_From_Pos(2);
    dll.Display();



    return 0;
}