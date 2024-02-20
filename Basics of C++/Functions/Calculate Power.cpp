#include<iostream>
using namespace std;

int pow(int a,int b){
	cin>>a>>b;
	int ans=1;
	for(int i=1;i<=b;i++){
		ans = ans*a;
	}
	cout<<"Ans is "<<ans<<endl;
}
int main(){
//	int x,y;
//	int an;
//	an = pow(x,y);
	int a,b;
	pow(a,b);
}
