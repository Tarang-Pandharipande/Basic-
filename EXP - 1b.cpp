#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the value of A and B: ";
    cin>>a;
    cin>>b;
    int sum = a + b;
    cout<<"the sum is "<<sum<<endl;

    int avg = (a+b)/2;
    cout<<"The average of A and B is "<<avg<<endl;

    if(a%2==0)
    {
        cout<<"A is even";
    }
    else
    {
          cout<<"A is odd";
    }
    
    
    return 0;
}