// display the series 0,0,2,1,4,2,6,3,8,4,………………………

#include <iostream>
using namespace std;

void calculate(int n){
    int num=0,next=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            cout<<num<<" ";
            num+=2;
        }
        else{
            cout<<next<<" ";
            next+=1;
        }
    }
    cout<<endl;
}

int main(){
    int x;
    cout<<"Enter the no of elements: ";
    cin>>x;
    calculate(x);
    cout<<endl;
    return 0;
}
