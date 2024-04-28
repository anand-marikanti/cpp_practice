#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter a number to wather its prime or not?"<<endl;
    int num;
    cin>>num;
    for (int i=2;i<=num-1;i++)
    {
        if(num%i==0)
        {
            cout<<"its not prime number"<<i<<endl;
        }
        else{
            cout<<"its prime number"<<i<<endl;
        }

    }
}