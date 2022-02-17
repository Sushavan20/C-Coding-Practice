// To display the sequence 1, 2, 4, 7,11,……………

#include<iostream>
using namespace std;

calculate(int len){
    int ans=1;
    for(int i=0;i<len;i++){
        ans+=i;
        cout<<ans<<" ";
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
