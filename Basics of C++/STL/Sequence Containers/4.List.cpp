#include<iostream>
#include<list>
using namespace std;

int main(){
	
list<int>l;
	
	l.push_back(1);
	l.push_front(2);
	int size = l.size();
	for(int i = 0;i<size;i++){
		cout<<i<<" "<<endl;
	}
	
	cout<<"Empty or not: "<<l.empty()<<endl;
	
	cout<<"First element: "<<l.front()<<endl;
	cout<<"Last element: "<<l.back()<<endl;
	
	
}
