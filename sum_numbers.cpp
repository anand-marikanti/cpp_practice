#include <iostream>
using namespace std;

int main()
{
    // cout << "Enter the number sum n:" << endl;
    // int n,sum=0;
    // cin >> n;
    // for (int i = 0; i <= n; i++)
    // {
    //     sum+=i;
    // }
    // cout<<"sum of all n number is:"<<sum<<endl;

    cout << "Enter the number to cal sum of  num:" << endl;
    int num,rem=0,sum=0;
    cin >> num;
    for (int i = 0; num>0; i++)
    {

        rem = num % 10;
        cout<<"reminder is "<<rem<<endl;
        sum = sum+rem;
        num=num/10;
    }
    cout<<"sum of total of enter numberis:"<<sum<<endl;
}
