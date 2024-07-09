#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	void *ptr = &n;
	cout<<*(int *)ptr;
}
