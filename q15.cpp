// Display the sequence BCA1, BCB2, BCC3, BCD4, …………………

#include<iostream>
using namespace std;

void calculate(int len){
    for (int i=0;i<len;i++)
        cout<<"BC"<<char(65+i)<<i+1<<" ";
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
