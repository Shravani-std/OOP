#include<iostream>
#include<queue>
using namespace std;

int main(){
	//max heap
	priority_queue<int>max;
	
	//min heap
	priority_queue<int , vector<int> , greater<int> > min;
	
	
	max.push(10);
	max.push(20);
	max.push(30);
	max.push(40);
	cout<<"Size of max:"<<max.size()<<endl;
	
	int n = max.size();
	
	for(int i = 0;i<n;i++){
		cout<<max.top()<<endl;
		max.pop();
	}
	cout<<endl;
	
	
	min.push(10);
	min.push(20);
	min.push(30);
	min.push(40);
	cout<<"Size of min:"<<min.size()<<endl;
	
	int m = min.size();
	
	for(int i = 0;i<m;i++){
		cout<<min.top()<<endl;
		min.pop();
	}
	cout<<endl;
}

