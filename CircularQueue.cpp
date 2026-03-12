#include <iostream>
using namespace std;
#define MAX 5

int Rear = -1;
int Front = -1;
int Queue[MAX];

void Enqueue(int value){
    if((Rear+1)%MAX == Front){
     
        cout<<"Queue is full"<<endl;

    }else{
        if(Front == -1){
            Front = 0;
        }
        cout<<"Enqueue is successfull"<<endl;
        Rear= ((Rear+1)%MAX);
        Queue[Rear] = value;
    }
}

void Dequeue(){
    if(Front == -1){
        cout<<"Queue is empty";
    }else{
        if(Front ==  Rear){
            Rear = -1;
            Front = -1;
        }else{
            cout<<"Dequeue is Successfull"<<endl;
            Front = ((Front+1)%MAX);
        }

    }
}
void Display(){
    for(int i = front; i<)
}

int main(){
    Enqueue(10);
    Enqueue(20);
    Enqueue(30);
    Enqueue(40);
    Enqueue(50);
    Enqueue(60);
 
    Dequeue();
    Dequeue();
    Display();
    return 0;
}