//display the sequence 1, 4, 9, 16, 25, 36, 49,………………..

# include <iostream>
using namespace std;

void pow_series(int n){
    for (int i=1;i<=n;i++){
        int val=i*i;
        cout<<val<<" ";
    }
    cout<<endl;
}

int main (){
    int n;
    cout<<"Enter the no of elements: ";
    cin>>n;
    pow_series(n);
    return 0;
}
