#include<iostream>
#include<algorithm>
using namespace std;

void reverse(int arr[], int n){
    int start = 0;
    int end = n-1;

    while(start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void printArray(int arr[], int n){
    cout<<" Reverse array: "<<endl;
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[100];
    int n ,key;

    cout<<"Enter size of an array "<<endl;
    cin>>n;

    cout<<"Enter array elements in array  "<<endl;
    for(int i = 0; i<n ; i++){
        cin>>arr[i];
    }
   
   	
	cout<<" You entered array "<<endl;
	for(int i = 0; i<n ; i++){
		cout << arr[i]<<" ";
	}
	cout<<endl;

    reverse(arr , n);
    printArray(arr , n);
}

