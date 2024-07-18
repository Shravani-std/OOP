#include<iostream>
using namespace std;

bool palindrom(string str, int i,int j ){
	
	if( i > j ){
		return true;
	}
	
	if(str[i] != str[j]){
		return false;
	}
	else{
		return palindrom(str,i+1,j-1);
	}
	
}

int main(){
	string str = "abba";
	cout<<endl;
	int i = 0;
	int j = str.size()-1;
	bool isPalindrom = palindrom(str,i,j);
	
	if(isPalindrom){
		cout<<"ITS a palindrom"<<endl;
	}
	else{
		cout<<"not"<<endl;
	}
}
