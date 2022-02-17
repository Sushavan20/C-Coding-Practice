// calculate the sum of n natural numbers.

# include <iostream>
using namespace std;

int calculate_sum(int x){
    int temp=0;
    for (int i=1;i<=x;i++)
        temp+=i;
    return temp;
}


int main (){
    int num;
    cout<<"Enter the no of integers : ";
    cin>>num;
    cout<<"Sum of "<<num<<" natural numbers = "<<calculate_sum(num)<<endl;
    return 0;
}

