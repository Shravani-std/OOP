#include<iostream>
using namespace std;
int main(){
	int goals;
	cout<<"Enter goals"<<endl;
	cin>>goals;
	
	if(goals<=5){
		goto sos;
	}
	else{
		cout<<"Yeah ";
		cout<<"You did it"<<endl;
		exit(1);   //terminates program execution
	}
	sos:
		cout<<"Unspeakable";
		return 0;
}
