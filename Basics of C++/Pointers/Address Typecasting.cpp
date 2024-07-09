#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	void *ptr = &n;
	int *intptr = (int *)ptr;
	cout<<*intptr;
}
