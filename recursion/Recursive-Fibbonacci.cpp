#include <iostream>
using namespace std;

int fib(int n){
    if(n<=1){
        return n;
    }

    return fib(n-1) + fib(n-2);
}

int main(){
    int terms;
    cout<<"Enter the terms"<<endl;
    cin>>terms;
    for(int i = 0; i<=terms; i++){
        cout<<fib(i)<<" ";
    }
      return 0;
}
  
