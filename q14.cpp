// Display the sequence A, Z, X, B, V,……………………

#include<iostream>
using namespace std;

void calculate(int len){
    int i=0,j=1,k=2;
    while(i<len){
       cout<<char(65+i)<<" "<<char(90-2*j)<<" "<<char(90-2*k)<<" ";
       i++;
       j++;
       k++;
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"Enter the no of elements: ";
    cin>>n;
    calculate(n);
    cout<<endl;
    return 0;
}

