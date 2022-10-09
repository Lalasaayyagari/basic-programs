#include<iostream>
using namespace std;
class employee{
	string name;
	int age;
   	public:
   		void get(){
   			cout<<"enter name: ";
   			cin>>this->name;
   			cout<<"enter age: ";
   			cin>>this->age;
		   }
		void display(){
			cout<<"name is: "<<this->name<<endl;
   			cout<<"age is: "<<this->age<<endl;	
		}
};
int main(){
	employee manager[4];
	for(int i=0;i<4;i++){
		//cout<<"details of manager are: "<<endl;
		manager[i].get();
}
for(int i=0;i<4;i++){
		cout<<"details of manager"<<i+1<<" are: "<<endl;
		manager[i].display();
}

}
/*OUTPUT
enter name: lalasa
enter age: 18
enter name: aswanth
enter age: 18
enter name: puneeth
enter age: 19
enter name: rahul
enter age: 14
details of manager1 are:
name is: lalasa
age is: 18
details of manager2 are:
name is: aswanth
age is: 18
details of manager3 are:
name is: puneeth
age is: 19
details of manager4 are:
name is: rahul
age is: 14*/
