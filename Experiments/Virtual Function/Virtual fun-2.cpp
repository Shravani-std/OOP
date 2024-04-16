#include<iostream>
using namespace std;

class Base{
	private:
		int a,b;
	public:
		virtual Base(int a,int b){
			cout<<"Show base"<<endl;
		}
};
class Derived : public Base{
	public:
		Base(int a,int b){
			cout<<"Addition:"<<a+b<<endl;
		}
};
int main(){
	Base*ptr;
	Derived d1;
	ptr = &d1;
	ptr->Base(10,20);
}
