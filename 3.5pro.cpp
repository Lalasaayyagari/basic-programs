#include<iostream>
#include<iomanip>

using namespace std;
int main(){
	int integer=58;
	float decimal=56.5;
	cout<<"integer: "<<integer;
	cout<<"\nfloat: "<<decimal;
	cout<<"\nint to float: "<<double(integer);
	cout<<"\nfloat to int: "<<int(decimal);
	
}
/*output
integer: 58
float: 56.5
int to float: 58
float to int: 56
*/
