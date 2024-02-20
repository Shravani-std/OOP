#include<iostream>
using namespace std;
int main(){
	int a,b;
	int op;
	cout<<"Enter two values"<<endl;
	cin>>a>>b;
	cout<<"Enter Operation No.\n 1.Addition\n 2.subtraction\n 3.Multiplication\n 4.Division\n"<<endl;
	cin>>op;
	switch( op ){
		case 1:
			cout<<"Addition of a & b is "<<a+b<<endl;
			break;
		case 2:
			cout<<"Subtraction of a & b is "<<a-b<<endl;
			break;
		case 3:
			cout<<"Multiplication of a & b is "<<a*b<<endl;
			break;
		case 4:
			cout<<"Division of a & b is "<<a/b<<endl;
			break;
		default:
			cout<<"Error";
			break;
	}
}
