#include<iostream>
using namespace std;

void reverseString(string str, int i,int j ){
	if( i > j ){
		return ;
	}
	
	swap(str[i],str[j]);

	i++;
	j--;
    reverseString(str,i,j);
	
	
}

int main(){
	string str = "abcde";
	//cout<<endl;
	int i = 0;
	int j = str.size()-1;
	reverseString(str,i,j);
	cout<<endl;
	cout<<str<<endl;
}
