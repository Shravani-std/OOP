#include<iostream>
#include<queue>
using namespace std;

int main(){
	
	queue<string>q;
	
	q.push("Hello");
	q.push("World");
	q.push("How");
	q.push("are you");
	
	cout<<"First element:"<<q.front()<<endl;
	cout<<"Empty or not:"<<q.empty()<<endl;
	
	cout<<"size befor pop:"<<q.size()<<endl;
	
	q.pop();
	cout<<"first after pop:"<<q.front()<<endl;
	cout<<"Size after pop:"<<q.size()<<endl;
}

