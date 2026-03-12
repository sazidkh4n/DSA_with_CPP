//iterative Binary Search

#include <iostream>
using namespace std;

int BS(int arr[],int size, int value){
    
    int st = 0;
    int end = size-1;

    while(st<=end){
        int mid = (st+end)/2;
        if(arr[mid]==value){
            return mid;
        }else if(arr[mid]<value){
            st = mid+1;
        }else{
          end = mid-1;;
        }
    }
    return -1;
}

int main(){

    int arr[] = {2,4,6,8,16,17,29};

    int size = sizeof(arr)/sizeof(int);
    int value;

    cout<<"Enter the value you want to find";
    cin>>value;

    cout<<"Value is present at index: "<<BS(arr,size,value);



    return 0;
}