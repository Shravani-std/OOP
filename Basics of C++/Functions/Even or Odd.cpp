#include<iostream>
using namespace std;

void isEvenOdd(int num){
	if(num%2==0){
		cout<<"Even"<<endl;
	}
	else{
		cout<<"Odd";
	}
}
int main(){
	int num;
	cout<<"Enter Number: "<<endl;
	cin>>num;
	isEvenOdd(num);
}
