//Searching element in Sorted array

#include <iostream>
using namespace std;

int valueINarray(int arr[],int size, int value){
     for(int i = 0; i<size; i++){
        if(arr[i]==value){
            return i;
        }
     }
     return -1;
}

int BinarySearch(int arr[], int size, int value){
    int st = 0;
    int end = size-1;
    while(st<=end){
        int mid = st +(end-st)/2; 
        if(arr[mid]== value){
            return mid;
        }else if(arr[mid]<value){
            st = mid+1;
        }else{
            end = mid-1;
        }
    }
    return -1;
}


int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,12,13,15,16,17,18};
    int size = sizeof(arr)/sizeof(int);
    int value;
    cout<<"Enter the value to find in array  ";
    cin>>value;
    //int result = valueINarray(arr,size,value);
    int result = BinarySearch(arr,size,value);
    if(result!=-1){
        cout<<"Value is present in array at index "<<result;
    }else{
        cout<<"Value is not present in array ";

    }
    return 0;
}