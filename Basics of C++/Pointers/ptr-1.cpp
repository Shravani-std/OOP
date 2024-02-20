#include<iostream>
using namespace std;

int update(int *a,int *b){
	int temp = *a;
	*a = *a + *b;
	*b = temp - *a;
}
int main(){
	int a,b;
	int* pa = &a;
	int* pb = &b;
	
	cin>>a>>b;
	update(pa,pb);
	cout<<*pa<<ends<<*pb<<endl;
	
//	cout<<&a<<&b;
}
