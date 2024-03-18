#include<iostream>
using namespace std;
class ABC
{
	private :
		int ticket;
		int no_of_tickets;
	public:
		ABC(int ticket,int no_of_tickets){
			this->ticket = ticket;
			this->no_of_tickets = no_of_tickets;
		}
		void display(){
			cout<<ticket<<endl;
			cout<<no_of_tickets;
		}
		
};
int main(){
	ABC t1(120,25);
//	t1.ticket;
//	ABC t2;
	t1.display();
}
