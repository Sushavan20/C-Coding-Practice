// display the sequence 7, 10, 8, 11, 9, 12, .................

#include <iostream>
using namespace std;

void calculate(int len){
    int i=1,res=7;
    while(i<=len){
        if(i%2){
            cout<<res<<" ";
            res+=3;
        }
        else{
            cout<<res<<" ";
            res-=2;
        }
        i++;
    }
}

int main(){
    int n;
    cout<<"Enter the no of elements: ";
    cin>>n;
    calculate(n);
    cout<<endl;
    return 0;
}

