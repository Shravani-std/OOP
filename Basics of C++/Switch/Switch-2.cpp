#include<iostream>
using namespace std;
int main(){
//	char ch='1';
	char ch='a';
	cout<<endl;
	switch(ch){
		case 1:
			cout<<"One"<<endl;
			break;
		case '1':
		    cout<<"character one"<<endl;
		    break;
//		case 'a':
//		    cout<<"nhdcgvsdhgv"<<endl;
//		    break;
		default:
			cout<<"Error"<<endl;
	}
}
