#include <iostream>
using namespace std;

int setbit(int num,int pos){
    return num | (1<<pos);
}

int main(){
    
    int num, pos;
    cout<<"Enter the Number and Position(index) where that bit should be ON"<<endl;

    cin>>num>>pos;

    if(setbit(num,pos)){
        cout<<"The bit changed successfully";
    }else{
        cout<<"Unexpected error ocurred";
    }

    return 0;
}