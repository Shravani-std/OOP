#include<iostream>
using namespace std;

int power(int n){
	if(n == 0){
		return 1;
	}
	
		int smallerProb = power(n-1);
		int biggerProb = 2*smallerProb;
		
		
	
	return biggerProb;
}
int main(){
	int n;
	cin>>n;
	int ans = power(n);
	cout<<ans;
}
