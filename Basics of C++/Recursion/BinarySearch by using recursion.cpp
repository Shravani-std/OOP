#include<iostream>
using namespace std;

void print(int arr[] , int s , int e){
	for(int i = s ; i <= e ; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
bool bSearch(int arr[] , int start, int end, int key){
//	if( size == 0){
//		return false;
//	}
	cout<<endl;
	print(arr,start,end);
	if(start>end){
		return false;
	}
	int mid = start+(end-start)/2;
	cout<<"Value of mid is: "<<arr[mid]<<endl;
	if( arr[mid] == key){
		return true;
	}

	if( arr[mid] < key){
		return bSearch(arr , mid+1 , end , key );
	}
	else{
		return bSearch(arr , start , mid-1 , key );
	}
}

int main(){
	int arr[7] = {2,4,6,8,12,45,65};
	int size = 7;
	int key;
	cout<<"Enter key: ";
	cin>>key;
	int start = 0;
	int end = size - 1;
	int ans = bSearch(arr,start,end,key);
	if(ans){
		cout<<"Key is Present..."<<endl;
	}
	else{
		cout<<"Key is Not Present..."<<endl;
	}
	return 0;
}
