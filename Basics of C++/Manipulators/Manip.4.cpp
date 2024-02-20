#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int a;
	cin>>a;
	cout<<"With no width"<<ends<<a<<endl;
	cout<<"With width set(10):"<<ends<<setw(10)<<a<<endl;
	
	cout<<"Sr No."<<setw(10)<<"Name"<<setw(10)<<"PRN NO."<<setw(10)<<"Branch"<<endl;
}
