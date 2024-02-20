#include<iostream>
using namespace std;

int factorial(int num){
      if(num<=1){
      	return 1;
	  }
	  else{
	  	return num*(num-1);
	  }

}
int nCr(int num,int r){
	
	int n = factorial(num);
	int deno = factorial(r) * factorial(num-r);
	int ans = n/deno;
	return ans;
//	int a;
//	a = n*(n-1);
//	int b = r*(r-1);
//	int c = (n-r)*(n-r-1);
//	int d = a/b*c;
//	return d;
}
int main(){
	int num,r;
	cout<<"Enter num and r:"<<endl;
	cin>>num>>r;
	int d;
    d = nCr(num,r);
    cout<<"nCr is: "<<d<<endl;
}
