#include<iostream>
using namespace std;

int main(){

	int n;
	
	cout<<"Enter a number: ";
	cin>>n;

	if(n%5==0 && n%3==0){
		cout<<n<< "is divided by 5 and 3";
	}
	else{
		cout<<n<< "is not divided by 5 and 3";
	}
	

}