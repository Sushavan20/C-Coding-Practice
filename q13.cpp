// Display the sequence A1, B2, C3, …., Y25,Z26, A1, B2,……………

#include<iostream>
using namespace std;

void calculate(int len){
    int next;
    if(len<26){
        for (int i=0;i<len;i++)
            cout<<char(65+i)<<i+1<<" ";
        cout<<endl;
        return;
    }
    else{
        next=len-26;
        for (int i=0;i<26;i++)
            cout<<char(65+i)<<i+1<<" ";
        for (int i=0;i<next;i++)
            cout<<char(65+i)<<i+1<<" ";
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

