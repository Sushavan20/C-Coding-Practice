// Display the sequence 14, 28, 20, 40, 32, 64, ...………………..

#include<iostream>
using namespace std;

calculate(int len){
    int val=14;
    for(int i=0;i<len/2;i++){
        cout<<val<<" "<<val*2<<" ";
        val=(val*2)-8;
    }
    if(len%2!=0)
        cout<<val;
}




int main(){
    int n;
    cout<<"Enter the no of elements: ";
    cin>>n;

    calculate(n);

    cout<<endl;
    return 0;
}
