#include <iostream>
using namespace std;
int main()
{
    int year;
    cout<<endl<<"Enter the year: ";
    cin>>year;
    if(year%4 == 0 && (year%100 != 0 ||  year%400 == 0))
    {
        cout<<"It is a leap year";1
    }
    else
    {
        cout<<"It is not a leap year";
    }
    return 0;
}