#include<iostream>
#include<string>
using namespace std;
int main(){
	string str("Hemlo Bro");
	cout<<str<<endl;
	
	//string str(number,character)
	string st(5,'s');
	cout<<st<<endl;
	
	//take string output
	string s;
	cout<<"Enter string: "<<endl;
	cin>>s;
	cout<<"print string: "<<s<<endl;
	
	
	//By using getline(cin,s)
	string sT;
    cout << "Enter String" << endl;
    getline(cin, sT);
    cout << "String is: " << sT << endl;
    return 0;
}
