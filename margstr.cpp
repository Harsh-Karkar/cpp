#include<iostream>
using namespace std;

int main()
{
    char a[30],b[30];
    int i,j;

    cout<<"enter a first name : ";
    cin>>a;

    cout<<"enter a second name : ";
    cin>>b;

    for(i=0; a[i]!='\0';i++)
    {

    }

    a[i]=' ';
    i++;

    for(j=0; b[j]!='\0'; j++)
    {
        a[i]=b[j];
        i++;
    }
    a[i]='\0';

    cout<<"full str is : "<<a;

}