#include<iostream>
using namespace std;

class Fashion{
	public:
		string company_name;
		string gender;
		int price;
		
		Fashion(string cn,string gn,int p);
		
};
Fashion::Fashion(string cn,string gn,int p){
	company_name = cn;
	gender = gn;
	price = p;
}

int main(){
	Fashion f1("ZARA", "Male/Female" , 2500);
	Fashion f2("H&M", "Male/Female" , 5000);
	Fashion f3("Zudio", "Male/Female" , 1000);
	
	cout<<f1.company_name<<" "<<f1.gender<<" "<<f1.price<<endl;
	cout<<f2.company_name<<" "<<f2.gender<<" "<<f2.price<<endl;
	cout<<f3.company_name<<" "<<f3.gender<<" "<<f3.price<<endl;
	
	return 0;
}
