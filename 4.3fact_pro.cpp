#include<iostream>
#include<conio.h>
using namespace std;
long fact(int n)
{
	if(n==0)
	return 1;
	return (n*fact(n-1));
}
int main(){
	int num;
	cout<<"enter a positive number: ";
	cin>>num;
	cout<<"factorial of: "<<num<<" is "<<fact(num);
}
/*
enter a positive number: 5
factorial of: 5 is 120
*/
