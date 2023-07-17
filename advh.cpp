#include<iostream>
using namespace std;

int main()
{
	char a[30];
	int i,j,n,k=0;

	cout<<"enter name : ";
	cin>>a;
	
	for(i=0; a[i]!='\0'; i++);
	
	n=i-1;
	j=n;
	for(i=0; i<=n; i++)
	{	
		if(i%2==0)
		{
			cout<<a[k];
			k++;
		}		
		else
		{
			cout<<a[j];
			j--;
		}	
	}
	return 0;
}