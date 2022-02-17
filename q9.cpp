// To display the sequence 1, 1, 5, 5, 9, 9, 13, 13, ………………………..

#include<iostream>
using namespace std;

calculate(int len){
    int ans=1;
    for(int i=0;i<len/2;i++){
        for(int j=1;j<=2;j++,cout<<ans<<" ");
        ans+=4;
    }
    if(len%2!=0)
        cout<<ans<<endl;
}

int main(){
    int n;
    cout<<"Enter the no of elements: ";
    cin>>n;
    calculate(n);
    cout<<endl;
    return 0;
}
