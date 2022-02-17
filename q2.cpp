// calculate the power of a number.

# include <iostream>
using namespace std;

int cal_pow(int x,int a){
    int temp=1;
    for (int i=1;i<=a;i++)
        temp=temp*x;
    return temp;
}

int main (){
    int num,pow;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"Enter the power: ";
    cin>>pow;

    cout<<num<<"^"<<pow<<" = "<<cal_pow(num,pow)<<endl;
    return 0;
}
