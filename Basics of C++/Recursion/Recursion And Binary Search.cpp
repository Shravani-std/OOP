#include<iostream>
using namespace std;

bool isSorted(int arr[] ,int size){
	if( size == 0 || size == 1){
		return true;
	}
	if(arr[0] > arr[1]){
		return false;
	}
	else{
		bool remaining = isSorted(arr+1 , size-1);
		return remaining;
	}
	
}
int main(){
	int arr[5] = {1,5,6,9,52};
	int size = 5;
	int ans = isSorted(arr,size);
	if(ans){
		cout<<"Array is Sorted"<<endl;
		
	}
	else{
		cout<<"Array is not Sorted"<<endl;
	}
	return 0;
}
