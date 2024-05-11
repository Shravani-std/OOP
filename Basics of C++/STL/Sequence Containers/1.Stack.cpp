#include<iostream>
#include<stack>
using namespace std;

int main(){
	
	stack<string>s;
	
	s.push("Hello");
	s.push("World");
	s.push("How");
	s.push("are you");
	cout<<"Top:"<<s.top()<<endl;
	cout<<"Empty or not:"<<s.empty()<<endl;
	
	cout<<"size:"<<s.size()<<endl;
	
	s.pop();
	cout<<"Top after pop:"<<s.top()<<endl;
}

