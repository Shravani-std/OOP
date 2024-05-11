#include<iostream>
#include<vector>
using namespace std;

int main (){
	
	vector<int> v;
	cout<<"Size:"<<v.size()<<endl;
	
	v.push_back(5);
	cout<<"capacity:"<<v.capacity()<<endl;
	
	v.push_back(6);
	cout<<"capacity:"<<v.capacity()<<endl;
	
	v.push_back(7);
	cout<<"capacity:"<<v.capacity()<<endl;
	cout<<"Size:"<<v.size()<<endl;
	
	cout<<"front:"<<v.front()<<endl;
	cout<<"back:"<<v.back()<<endl;
	
	v.clear();
	cout<<"capacity after clear function:"<<v.capacity()<<endl;
	cout<<"Size after clear function:"<<v.size();
	
}
