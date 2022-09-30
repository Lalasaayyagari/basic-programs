#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
	float cel_temp,fah_temp;
	cout<<"ENTER TEMPERATURE IN FAHRENHEIT: "<<endl;
	cin>>fah_temp;
	cel_temp=(0.55)*(fah_temp-32);
	cout<<"TEMPERATURE IN CELSIUS: "<<cel_temp<<endl;

	
}
