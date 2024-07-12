#include<iostream>
using namespace std;

void print(int arr[],int n){
	cout<<"Size of array is "<<n<<endl;
	for(int i = 0 ; i < n ; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
bool linearSearch(int arr[] , int size,int key){
	cout<<endl;
	print(arr,size);
	if( size == 0){
		return false;
	}
	if(key == arr[0]){
		return true;
	}
		bool found = linearSearch(arr+1,size-1,key);
		return found;
	

}
int main(){
	int arr[5] = {2,8,9,16,40};
	int size = 5;
	int key;
	cout<<"enter key"<<endl;
	cin>>key;
	cout<<endl;
	int ans = linearSearch(arr,size,key);
	if(ans){
		cout<<"Key is Found"<<endl;
	}
	else{
		cout<<"Key is not found"<<endl;
	}
}
