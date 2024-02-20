#include<iostream>
using namespace std;
int main(){
	char ch = '1';
	int num = 1;
	cout<<endl;
	switch(ch){
		case 1:
		
				cout<<"a for an apple"<<endl;
				break;
		case '1':switch( num ){
			case 1:
				cout<<"One"<<endl;
			break;
		}
		break;
				 default:
				 cout<<"Error"<<endl;		
	}
}
