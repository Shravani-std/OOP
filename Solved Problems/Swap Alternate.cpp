#include<iostream>
using namespace std;

void printArray(int arr[], int n){
	cout<<"After Swap Alternate: ";
	for(int i = 0 ; i<n ; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
void swapAlternate(int arr[], int n){
	for(int i=0 ; i<=6 ; i=i+2){
		if(arr[i+1] < 6){
			swap(arr[i] , arr[i+1]);
		}
	}
}
int main(){
	int arr[6] = {2,1,4,3,6,5};
	swapAlternate(arr , 6);
	printArray(arr , 6);
	
}
