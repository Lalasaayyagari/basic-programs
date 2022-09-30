#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
class person{
		string name;
		int age;
		char gender;
	public:
		void get(){
			cout<<"ENTER NAME: ";
			cin>>this->name;
			cout<<"ENTER AGE: ";
			cin>>this->age;
			cout<<"ENTER GENDER: ";
			cin>>this->age;
		}
		void display(){
			cout<<"ENTER NAME: "<<this->name;
			cout<<"ENTER AGE: "<<this->age;
			cout<<"ENTER GENDER: "<<this->age;	
		}
};
int main(){
	person x[5];
	for(int i=0;i<5;i++){
		cout<<"PERSON DETAILS ARE: "<<endl;
		x[i].get();
	}
	for(int i=0;i<5;i++){
		cout<<"PERSON DETAILS ARE: "<<endl;
		x[i].display();
	}
	
	
	
	
	
	
	
}
