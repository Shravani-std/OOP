#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a;
    string b;
    cin>>a>>b;
    
    //size of string
    cout<<a.size()<<" "<<b.size()<<endl;
    
    //concatination of two strings
     cout<<a+b<<endl;
     
     //swap first char of given two strings
    char temp;
    temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    cout<<a<<ends<<b;
    return 0;
}
