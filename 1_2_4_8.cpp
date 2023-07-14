#include<iostream>
using namespace std;

int main()
{
    int n,i;

    cout<<"enter a number : ";
    cin>>n;

    for(i=1; i<=n; i*=2)
    {
        cout<<"\t"<<i;
    }

}