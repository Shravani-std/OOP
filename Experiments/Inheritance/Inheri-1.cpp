#include<iostream>
using namespace std;

class College{
	public:
		string name = "DKTE";
		int no_Of_Branches = 8;
};
class Branch:public College{
	public:
		string branch;
		int no_Of_Students;
		Branch(string br, int ns){
			branch = br;
			no_Of_Students = ns;
		}
};
int main(){
//	Branch b;
	Branch b1("CSE_AI",75);
	Branch b2("CSE",60);
	Branch b3("Civil",71);
	Branch b4("Mechanical",55);
	
	cout<<"College Name:"<<b1.name<<endl;
	cout<<"No.of Branches:"<<b1.no_Of_Branches<<endl;
	
	cout<<"Branches and No. of students in each brach:"<<endl;
	cout<<b1.branch<<"="<<b1.no_Of_Students<<endl;
	cout<<b2.branch<<"="<<b2.no_Of_Students<<endl;
	cout<<b3.branch<<"="<<b3.no_Of_Students<<endl;
	cout<<b4.branch<<"="<<b4.no_Of_Students<<endl;
	
	return 0;
}
