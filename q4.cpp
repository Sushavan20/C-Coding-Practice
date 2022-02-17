// display the sequence 1, 2, 2, 4, 8, 32, 256,………………..

#include <iostream>
using namespace std;

void calculate(int x){
    int a=1,b=2,next;
    cout<<a<<" "<<b<<" ";
    for (int i=0;i<x-2;i++){
        next=a*b;
        cout<<next<<" ";
        a=b;
        b=next;
    }
}

int main(){
    int n;
    cout<<"Enter the no of elements: ";
    cin>>n;
    calculate(n);
    return 0;
}
