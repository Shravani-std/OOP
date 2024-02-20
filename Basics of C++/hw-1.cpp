#include<iostream>
using namespace std;
int main(){
	
    int ch;
    cout<<"Enter ch"<<endl;
    cin>>ch;
    
    if(ch == 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r',
	's','t','u','v','w','x','y','z' 
	){
		cout<<"Lowercase";
	}
	else if(ch == 0,1,2,3,4,5,6,7,8,9 ){
		cout<<"Numeric";
	}
	else{
		cout<<"Uppercase";
	}
	
}
