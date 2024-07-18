#include<iostream>
using namespace std;

int power(int a,int b){
	if( b == 0)	return 1;
	if( b == 1) return a;
	
	int ans = power(a,b/);//recursive call
	
	if(b%2 == 0){//for even
		return ans * ans;
	}
	else{//for odd
		return a * ans*ans;
	}
}

int main(){
	int a,b;
	cout<<"Enter a,b:"<<endl;
	cin>>a;
	cin>>b;
	int ans = power(a,b);
	cout<<ans<<endl;
}
