// display the sequence 1, 2, 4, 8, 16, 32, 64,………………..

# include <iostream>
using namespace std;

int cal_pow(int x,int a){
    int temp=1;
    for (int i=1;i<=a;i++)
        temp=temp*x;
    return temp;
}

void powTwo_series(int n){
    for (int i=0;i<n;i++)
        cout<<cal_pow(2,i)<<" ";
    cout<<endl;
}

int main (){
    int n;
    cout<<"Enter the no of elements: ";
    cin>>n;
    powTwo_series(n);
    return 0;
}
