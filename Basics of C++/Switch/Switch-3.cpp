#include<iostream>
using namespace std;
int main(){
	char ch;
	cout<<"Enter character a,b or c"<<endl;
	cin>>ch;
	switch(ch){
		case 'a':
			case 'A':
				cout<<"a for an apple"<<endl;
				break;
		case 'b':
		case 'B':
		         cout<<"b for ball"<<endl;
				 case 'c':
				 case 'C':
				 cout<<"c for cat"<<endl;
				 default:
				 cout<<"Error"<<endl;		
	}
}
