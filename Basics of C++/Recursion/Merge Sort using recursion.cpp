#include<iostream>
using namespace std;

void merge(int *arr ,int s, int e){
	
	int mid = (s+e)/2;
	
	int left = mid - s + 1; //size of left part
	int right = e - mid; //size of right part
	
	int *first = new int[left];
	int *second = new int[right];
	
	//to store elements on left part
	int mainArrayIndex = s;
	for(int i = 0; i < left ; i++){
		first[i] = arr[mainArrayIndex++];
	}
	//to store elements on right part
	mainArrayIndex = mid + 1;
	for(int i = 0 ; i < right; i++){
		second[i] = arr[mainArrayIndex++];
	}
	
	//copy elements
	int index1 = 0;
	int index2 = 0;
	mainArrayIndex = s;
	
	while( index1 < left && index2 < right){
		if( first[index1] < second[index2]){
			arr[mainArrayIndex++] = first[index1++];
		}
		else{
			arr[mainArrayIndex++] = second[index2++];
			
		}
	while(index1 < left){
		arr[mainArrayIndex++] = first[index1];
	}
	while(index2 < right){
		arr[mainArrayIndex++] = second[index2];
	}
	
	delete []first;
	delete []second;
}
	
void mergeSort(int *arr, int s, int e) {
    // base case
    if (s >= e) {
        return;
    }
    int mid = (s + e) / 2;
    
    mergeSort(arr, s, mid);
    
    mergeSort(arr, mid + 1, e);
    
    merge(arr, s, e);
}
int main(){
	int arr[] = {5,8,1,7,56,20,34};
	 int n = sizeof(arr) / sizeof(arr[0]);
	mergeSort(arr, 0 , n - 1);
	for(int i = 0 ; i<n ; i++){
		cout<<arr[i] <<" ";
		
	}
	cout<<endl;
}
}
