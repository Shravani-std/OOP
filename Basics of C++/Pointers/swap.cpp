#include<iostream>
using namespace std;

void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main(){
	int a = 2;
	int b = 3;
	int *ptra = &a;
	int *ptrb = &b;
	swap(ptra , ptrb);
	cout<<*ptra<<*ptrb;
	
//	swap( &a , &b );
//	cout<<a<<b;
}
