#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

class LinkedList{
    Node* head;
    Node* tail;
 public:
    LinkedList(){
        head = tail = NULL;
    }

    //Inserting From Front

        void Insert_at_Front(int val){
            Node* newnode = new Node();
            newnode->data = val;
            newnode->next = NULL;
            if(head==NULL){
                head = tail = newnode;
            }else{
               newnode->next = head;
               head =  newnode;
            }
            cout<<"Value "<<val<<" has Successfully Inserted in LinkedList at front"<<endl;
        }

    //Deletion From Front
    
    void deletion_from_Front(){
        
        if(head == NULL){
            cout<<"Deletion Not Possible: Linked List is Empty"<<endl;
            return;
        }
        Node* temp = head;
            head = temp->next;
           
            if(head == NULL){
                tail = NULL;
            }
             delete temp;
        
    }

    //Inserting from Back

    void Inserting_From_Back(int val){
        Node* newnode = new Node();
        newnode->data = val;
        newnode->next = NULL;
        if(head==NULL){
            head = tail = newnode;
            return;
        }
        tail->next = newnode;
        tail = newnode;
    }

    //Deletion from Back

    void Deletion_From_Back(){
        if(head == NULL){
            cout<<"Deletion Not Possible: Linked List is empty"<<endl;
            return;
        }


        if(head == tail){
            delete head;
            head = tail =  NULL;
            return;
        }
            Node* temp = head;

            while(temp->next != tail){
                temp = temp->next;
            }
            delete tail;
            tail = temp;
            tail->next = NULL;
            
    }

    //Inserting in the Middle of Linked List

    void Inserting_in_Pos(int val,int pos){

        if(pos<1){
          cout<<"Invalid Position"<<endl;
          return;
        }

        if(head == NULL){
          cout<<"Cannot Inserted at "<<pos<<" as LinkedList is Empty"<<endl;
          return;
        }
        
        if(pos == 1){
            Insert_at_Front(val);
            return;
        }
        Node* newnode = new Node();
        newnode->data = val;
        newnode->next = NULL;

          Node* temp = head;
        for(int i = 1; i<pos-1 && temp != NULL; i++ ){
            temp = temp->next;
        }
        if(temp == NULL){
            cout<<"Position Out of Range"<<endl;
            delete newnode;
            return;
        }
        newnode->next = temp->next;
        temp->next = newnode;  
        if(newnode->next == NULL){
            tail = newnode;
        }

    }

    //Deletion from Position

    void Deletion_From_Postion(int pos){
       
         if(pos<1){
          cout<<"Invalid Position"<<endl;
          return;
        }
        if(head == NULL){
            cout<<"Deletion Not Possible: Linked List is empty"<<endl;
            return;
        }
        Node* temp = head;
         if(pos == 1){
            head = temp->next;
            delete temp;
            return;
        }
    for(int i = 1; i<pos-1 && temp!=NULL ;i++){
        temp = temp->next;
    }
    if(temp==NULL || temp->next ==NULL){
        cout<<"Out of Range"<<endl;
        return;
    }
      Node* newtemp = temp->next;
      temp->next = newtemp->next;
      if(newtemp==tail){
        tail = temp;
      }
      delete newtemp;

    }

    //Traversing in Linked List finding node of target

    void Find_Target(int target){
        Node* temp = head;
        int idx = 1;

        while(temp!=NULL){
            if(temp->data == target){
                cout<<"Value is present in node "<<idx<<endl; 
                return;
            }
            temp = temp->next;
            idx++;
        }
        cout<<"value is not present in Linked List"<<endl;
    }

    //Displaying the Linked List
    
    void display(){
        Node* temp = head;
        int idx = 1;
       while(temp!=NULL){
        cout<<"Value at index "<<idx<<" is "<<temp->data<<endl;
        temp = temp->next;
        idx++;
       }
    }
        
};


int main(){
    LinkedList ll;
    ll.Insert_at_Front(17);
    ll.Insert_at_Front(13);
    ll.Insert_at_Front(27);
    ll.Insert_at_Front(36);
    ll.Insert_at_Front(46);
    ll.display();
    ll.deletion_from_Front();
    cout<<"Deletion From Front"<<endl;
    ll.display();
    cout<<"Inserting From Back"<<endl;
    ll.Inserting_From_Back(87);
    ll.display();
    cout<<"Deletion From back"<<endl;
    ll.Deletion_From_Back();
    ll.display();
    cout<<"Inserting At Position"<<endl;
    ll.Inserting_in_Pos(91,2);
    ll.display();
    cout<<"Deleting From Position"<<endl;
    ll.Deletion_From_Postion(4);
    ll.display();
    ll.Find_Target(27);

    return 0;
}