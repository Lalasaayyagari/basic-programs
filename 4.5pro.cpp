#include<iostream>
using namespace std;
int area(int side){
	return side*side;
}
int area(int a,int b){
	return a*b;
}
float area(float radius){
	return 3.14*radius*radius;
}
int main()
{
	cout<<"area of square: "<<area(5);
	cout<<"\narea of rectangle: "<<area(5,6);
	cout<<"\narea of circle: "<<area(5.5f);
}

