#include <iostream>
using namespace std;

bool sort(int arr[], int n){
    if(n<=1){
        return true;
    }
    bool rest = sort(arr+1,n-1);

    return arr[0]<arr[1] && rest;
}

int main(){

    int arr[] = {1,2,3,7,5};
    int size = 5;

    cout<<sort(arr,size);


    return 0;
}