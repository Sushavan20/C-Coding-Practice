// To display the sequence 21, 9, 21, 11, 21, 13, 21, .................

#include<iostream>
using namespace std;

calculate(int len){
    int fixed=21;
    for(int i=0;i<len;i++){
        if(i%2==0)
            cout<<fixed<<" ";
        else
            cout<<8+i<<" ";
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
