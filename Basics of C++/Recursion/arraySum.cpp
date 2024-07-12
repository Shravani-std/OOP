#include<iostream>
using namespace std;

int getSum(int arr[] ,int size){
	if( size == 0)
		return 0;
	if( size == 1){
		return arr[0];
	}
	int arraySum = arr[0] + getSum(arr+1,size-1);
	return arraySum;
}

int main(){
	int arr[5] = {1,2,3,4,5};
	int size = 5;
	int ans = getSum(arr,size);
	cout<<"Sum is: "<<ans<<endl;
	return 0;
}
