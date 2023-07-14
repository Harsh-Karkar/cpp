#include<iostream>
using namespace std;

int main()
{
    int year;

    cout<<"enter year :";
    cin>>year;

    if(year%4==0)
    {
        cout<<"this year is leap year";
    }
    else
    {
        cout<<"this year is not leap year";
    }
}