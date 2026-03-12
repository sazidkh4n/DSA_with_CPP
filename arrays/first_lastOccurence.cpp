//first occurence of element

#include <iostream>
using namespace std;

int FO(int arr[],int size, int value){
    for(int i = 0; i<size; i++){
        if(arr[i]==value){
        return i;
       }
    }
    return -1;
}

int LO(int arr[], int size, int value){

    for(int i = size-1; i>=0; i--){
        if(arr[i]==value){
            return i;
        }
    }
    return -1;

}

int main(){
    int arr[] = {1,3,5,2,68,4,7,8,43,3,7,90,5,3,4,6,9,0,53,3,6,8,0,63,2,56,9,0,0,5,3,45,7,5,4,3};
    int size = sizeof(arr)/sizeof(int);
    int value;
    cout<<"Enter the value to check its occurence ";
    cin>>value;
    /* int result = FO(arr,size, value);
    if(result!=-1){
        cout<<"First occurence of value is at index "<<result;
    }else{
        cout<<"no occurnce";
    } */
    int result = LO(arr,size, value);
    if(result!=-1){
        cout<<"Last occurence of value is at index "<<result;
    }else{
        cout<<"no occurnce";
    }
    return 0;
}