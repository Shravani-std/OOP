#include<iostream>
using namespace std;

class Base
{
	private:
		int a,b;
	public:
//		   Base(int num1,int num2){
//			a = num1;
//			b = num2;
//		}
		virtual void add(int a,int b){
			cout<<"Add two numbers"<<endl;
		}	
		void show(){
			cout<<"Addition is done"<<endl;
		}
		
};
class Derived : public Base{
	public:
		void add(int a,int b){
			cout<<"Addtion : "<<a + b<<endl;
		}
		void show(int a,int b){
			cout<<"Addition is done final result:"<<endl;
		}
};
int main(){
	Base*ptr;
	Derived d1;
	ptr = &d1;
	ptr->add(10,20);
	ptr->show();
	return 0;
}
