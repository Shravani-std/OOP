#include<iostream>
using namespace std;

int max(int arr[],int size){
	int max = INT_MIN;
	for (int i = 0 ; i<size ; i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	return max;
}
int min(int arr[],int size){
	int min = INT_MAX;
	for (int i = 0 ; i<size ; i++){
		if(arr[i] < min){
			min = arr[i];
		}
	}
	return min;
}
int main(){
	int size;
	cin>>size;
	
	int arr[100];
	cout<<"Enter array numbers"<<endl;
	for(int i = 0 ; i<size ; i++){
		cin>>arr[i];
	}
	cout<<"Your array is"<<endl;
		for(int i = 0 ; i<size ; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<"Maximum value is "<<max(arr , size)<<endl;
	cout<<"Minimum value is "<<min(arr , size)<<endl;
}
