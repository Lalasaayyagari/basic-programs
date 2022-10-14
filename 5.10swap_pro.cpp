#include<iostream>
using namespace std;
class class_2;
class class_1{
	int value1;
	public:
		void intdata(int a){value1=a;}
		void display(void){cout<<"value1: "<<value1<<endl;}
		friend void exchange(class_1 &,class_2 &);
};
class class_2{
	int value2;
	public:
		void intdata(int a){value2=a;}
		void display(void){cout<<"value2: "<<value2<<endl;}
		friend void exchange(class_1 &,class_2 &);
};
void exchange(class_1 & x,class_2 & y){
	int temp=x.value1;
	x.value1=y.value2;
	y.value2=temp;
}
int main(){
	class_1 c1;
	class_2 c2;
	c1.intdata(1);
	c2.intdata(2);
	cout<<"values before exchange: "<<endl;
	c1.display();
	c2.display();
	exchange(c1,c2);
	cout<<"values after exchange: "<<endl;
	c1.display();
	c2.display();
	
	return 0;
	
	
}
