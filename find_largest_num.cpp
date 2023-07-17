#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	
	cout<<"Enter value a : ";
	cin>>a;
	cout<<"Enter value b : ";
	cin>>b;
	cout<<"Enter value c : ";
	cin>>c;
	if(a>b && a>c)
    {
		cout<<a<<" is largest number";
	}
	else if(b>a && b>c)
    {
		cout<<b<<" is largest number";
	}
	else
    {
		cout<<c<<" is largest number";
	}
	
}