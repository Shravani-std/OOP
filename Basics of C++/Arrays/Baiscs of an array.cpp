#include<iostream>
using namespace std;

void printArray(int arr[],int size){
		cout<<"Print array"<<endl;
	for(int i = 0; i<size ; i++){
		cout<<arr[i] <<" ";
	}
}
int main(){
	
	int number[15];//Declaration
	cout<<"Value at 15 th index "<<number[14]<<endl;//Accessing na array
	
	//Array initialization
	int n[13] = {2,3,5};
	cout<<"Value a index 2 is "<<n[2]<<endl;
	
	 printArray(n,13);
	 
	 int nthsize = sizeof(n)/sizeof(int);
	 cout<<"Size of n is "<<nthsize;
}
