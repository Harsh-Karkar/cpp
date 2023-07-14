#include<iostream>
using namespace std;

int main()
{
     int a=1,n,sum=0;
	   

	   cout<<"enter a n:";
	   cin>>n;
	   while(a<=n)
	   {    sum+=a;
		cout<<"\t+\t"<<a;
		a++;
	   }
	   cout<<"\nsum = "<<sum;
}