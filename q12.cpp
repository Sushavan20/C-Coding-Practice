// Display the sequence A1, B2, C4, D8, E16, F32, ................

#include<iostream>
using namespace std;

int cal_pow(int x,int a){
    int temp=1;
    for (int i=1;i<=a;i++)
        temp=temp*x;
    return temp;
}

void calculate(int len){
    for (int i=0;i<len;i++)
        cout<<char(65+i)<<cal_pow(2,i)<<" ";
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
