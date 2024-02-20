#include<iostream>
using namespace std;

/*METHOD-1
int printCounting(int n){
	int count = 1;
	for(int i = 1 ; i<=n ; i++){
		cout<<count<<ends;
		count = count + 1;
	}
	return count;
}*/

//METHOD-2
void counting(int n){
	for(int i = 1; i<=n ; i++){
		cout<<i<<ends;
	}
}
int main(){
	int n;
	cout<<"Enter Number untill print count:"<<endl;
	cin>>n;
//	int ans;
//	ans = printCounting(n);
    counting(n);
}
