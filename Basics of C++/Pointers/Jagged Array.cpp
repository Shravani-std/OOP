#include<iostream>
using namespace std;

int main(){
	const int row = 3;
	int *jaggedArray[3];
	
	jaggedArray[0] = new int[3]{1,2,3};
	jaggedArray[1] = new int[2]{4,5};
	jaggedArray[2] = new int[4]{6,7,8,9};
	
	for(int i = 0; i< row ; ++i){
		cout<<"row: "<<i<<endl;
		for(int j = 0 ; j < (i == 0 ? 3 : i == 1 ? 2 : 4) ; ++j){
			cout<<jaggedArray[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
} 
