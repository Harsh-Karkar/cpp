#include<iostream>
using namespace std;

int main()
{
	float std[5],sub[3],i,total,per;
	for(i=0; i<5; i++)
	{


	cout<<"\nenter mark of subject : ";
	cin>>sub[0];
	cin>>sub[1];
	cin>>sub[2];

	total= sub[0]+sub[1]+sub[2];
	cout<<"total = "<<total;

	per=(total*100)/300;
	cout<<"per = "<<per;

	if(per >= 90){	

		cout<<"student is pass grade = A";
	}
	else if(per>= 60){
		
		cout<<"student is pass grade = b";
	}

	else if(per >= 33){

		cout<<"student is pass grade = c";
	}

	else
	{	
		cout<<"student is fail try again\n";
	}
		
	}
	
	
	
	return 0;
}