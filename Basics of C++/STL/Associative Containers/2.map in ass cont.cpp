#include<iostream>
#include<map>
using namespace std;

int main(){
	
	map<int ,string>m;
	
	m[1] = "Hello";
	m[5] = "brother";
	m[3] = "World";
	
	m.insert({4,"hii"});
	
	cout<<"Before erase"<<endl;
	
	for(auto i:m){
		cout<<i.first<<" = "<<i.second<<endl;
	}
	
	cout<<"Finding 5:"<<m.count(5)<<endl;
	
	m.erase(5);
	cout<<"After erase"<<endl;
	for(auto i:m){
		cout<<i.first<<" = "<<i.second<<endl;
	}
	
	auto it = m.find(5);
	for(auto i = it;i!=m.end();i++){
		cout<<(*i).first<<endl;
	}
}
