#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=1;
 
	while(i<=n){
		
		int space = n-i ;
		while(space){
			cout<<" ";
			space=space-i;
		}
		int j=1;
		while(j<=i){
		    	
			cout<<j;
			
			j=j+1;
		}
		int s=i-1;
		while(s){
			cout<<s;
			s=s-1;
		}
		cout<<endl;
		i=i+1;
		
	}
}
