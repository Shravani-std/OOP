#include<iostream>
using namespace std;
void increment(int a){
	a++;
}
int main(){
	int b = 20;
	int *ptr = &b;
	int c = increment(*a);
	cout<<c<<endl;
}
