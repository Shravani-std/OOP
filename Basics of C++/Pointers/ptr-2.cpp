#include<iostream>
using namespace std;
int main(){
	int a = 10;
	int *ptr = &a;
	cout<<*ptr<<endl;  // derefference
	cout<<ptr<<endl;
	cout<<&a<<"\n";
	*ptr = 20;
	cout<<a<<"\n";
	a++;
	cout<<*ptr<<endl;
	
	
	int **q = &ptr;
	cout<<**q<<endl;
//	ptr++;
//	cout<<ptr<<endl;
}
