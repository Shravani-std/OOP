#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=1;
	int count=1;
	
	while(i<=n){
		int j=0;
		int value=i;
		while(j<=i){
			cout<<value;
			value=value+1;
//           cout<<i+j;  //instead of writting new value we can use this logic
			j=j+1;
		}
		cout<<endl;
		i=i+1;
	}
	return 0;
}
