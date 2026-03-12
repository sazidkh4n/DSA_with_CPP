#include <iostream>
using namespace std;

int findSqRoot(int arr[],int size, int value){
    int st = 0;
    int end = size -1;

    while(st<=end){
        int mid = st + (end - st)/2;
        if(arr[mid] * arr[mid] == value){
            return mid;
        }else if (arr[mid]* arr[mid]< value){
            st = mid + 1;
        }else{
            end = mid -1;
        }
     }
     return -1;
}

int main(){
    int arr[] = {2,4,5,8,16,10,25,36,9,49,64,81,100};
    int size = sizeof(arr)/sizeof(int);
    int value;
    cout<<"Enter the value to find its square root ";
    cin>>value;
    int result = findSqRoot(arr,size, value);

    if(result != -1){
        cout<<"Square root of "<< value <<" is present in array at index of: "<<result;
    }else{
        cout<<"Square Root of " << value<<"is not present in the array ";
    }
    return 0;
}