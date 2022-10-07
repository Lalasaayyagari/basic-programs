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
