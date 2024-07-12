#include<iostream>
using namespace std;

int reachHome(int a,int b){
	
	//cout<<"Starting "<< a <<"Ending "<< b <<endl;
	if(a == b){
		cout<<"Arrived";
	}
	a++;
	reachHome(a,b);
	
}
int main(){
	int b = 10;
	int a = 1;
	cout<<endl;
	reachHome(a,b);
}
