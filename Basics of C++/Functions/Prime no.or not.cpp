#include<iostream>
using namespace std;

bool isPrime(int n){
	for (int i=2;i<n-1;i++){
		if(n%i==0){
			return 0;
		}
	
	}
	return 1;
}
int main(){
	int n;
	cout<<"Enter n"<<ends;
	cin>>n;
	if(isPrime(n)){
		cout<<n<<" is a prime no."<<endl;
	}
	else{
		cout<<n<<" is not a prime no.";
	}
}
