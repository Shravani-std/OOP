#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the value of n"<<endl;
	cin>>n;
	
	cout<<"Printing count from i to n"<<endl;
	int i=1;
	//we can use for loop without any conditions pressent in for bracket we can access loop with writing conditions outside as well as inside the loop
	for( ; ; ){
		if(i<=n){
			cout<< i<<endl;
		}
		else{
			break;
		}
		i++;
	}
	//we can write multiple conditions in loop too
	for(int a=0 , b=1 , c=2; a>=0 && b>=1 && c>=2; a--,b--,c--){
		cout<<a<<" "<<b<<" "<<c<<endl;
	}
	
}
