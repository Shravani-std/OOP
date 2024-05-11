#include<iostream>
#include<deque>
using namespace std;

int main(){
	
	deque<int>d;
	
	d.push_back(1);
	d.push_front(5);
	
	cout<<"Print first index:"<<d.at(1)<<endl;
	cout<<"front: "<<d.front()<<endl;
	cout<<"back: "<<d.back()<<endl;
	
	cout<<"Emty or not: "<<d.empty()<<endl;
	
	cout<<"before erase size :"<<d.size()<<endl;
	d.erase(d.begin(),d.begin()+1);
	cout<<"After erase size: "<<d.size()<<endl;
//	for(int i:d){
//		cout<<i<<endl;
//	}
	

}
