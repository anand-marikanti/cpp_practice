#include <iostream>
using namespace std;

// int main()
// {
//     int a, b;
//     cout << "Enter the two numbers to fin largest numbers" << endl;
//     cin >> a;
//     cin >> b;

//     if (a > b)
//     {
//         cout << "greater number is:" << a << endl;
//     }
//     else
//     {
//         cout << "greater number is:" << b << endl;
//     }
// }
//print give number is even or odd

int main()
{
    int a;
    cout<<"enter the number to even or odd"<<endl;
    cin>>a;
    if (a/2==0){
        cout<<"given number is even"<<a<<endl;

    }
    else{
        cout<<"Given number is odd"<<a<<endl;
    }
}