#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class item{
	int number;
	float cost;
	public:
		void get(int a,float b);
		void put();
};
void item::get(int a,float b)
{
	number=a;
	cost=b;
}
void item::put()
{
	cout<<"NUMBER: "<<number<<endl;
	out<<"COST: "<<cost<<endl;
}
int main()
{
	item x,y;
	cout<<"object X: "<<endl;
	x.get(5,899);
	x.put();
	cout<<endl;
	cout<<"object Y: "<<endl;
	y.get(6,999);
	y.put();
	}

/*OUTPUT
object X:
NUMBER: 5
COST: 899

object Y:
NUMBER: 6
COST: 999*/
