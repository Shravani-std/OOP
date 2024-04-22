#include<iostream>
using namespace std;

class A{
	public:
		virtual void function_1(){
			cout<<"Fumction -1 in base class"<<endl;
		}
		
		virtual void function_2(){
			cout<<"Fumction 2 in base class"<<endl;
		}
		virtual void function_3(){
			cout<<"Fumction 3 in base class"<<endl;
		}
};
class B : public A{
	public:
		void function_1(){
		     cout<<"Function 1 in derived class B"<<endl;
		}
		
		void function_2(){
		     cout<<"Function 2 in derived class B"<<endl;
		}
		void function_3(){
		     cout<<"Function 3 in derived class B"<<endl;
		}
};
class C : public B{
	public:
		void function_1(){
		     cout<<"Function 1 in derived class c"<<endl;
		}
		
		void function_2(){
		     cout<<"Function 2 in derived class c"<<endl;
		}
		void function_3(){
		     cout<<"Function 3 in derived class c"<<endl;
		}
};
int main(){
	A *b1;
	B *d1;
	C *c1;
	
	B obj1;
	b1 = &obj1;
	b1->function_1();
	b1->function_2();
	b1->function_3();
	
	C obj2;
	b1 = &obj2;
	b1->function_1();
	b1->function_2();
	b1->function_3();
}
