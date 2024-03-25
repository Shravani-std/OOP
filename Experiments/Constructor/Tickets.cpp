#include<iostream>
using namespace std;

class Tickets{
	public:
		string movie_Name;
		int ticket_Price;
		int timing;
	
		Tickets(string nm, int rs, int tm){
			movie_Name = nm;
			ticket_Price = rs;
		    timing = tm;
		}
};

int main(){
	Tickets mv1("Astral" , 250 , 9);
	Tickets mv2("Sitara" , 350 , 12);
	
	cout<<"Movie Name"<<ends<<"Ticket Price"<<ends<<"Timing pm"<<endl;
	cout<<mv1.movie_Name<<ends<<mv1.ticket_Price<<ends<<mv1.timing<<endl;
	cout<<mv2.movie_Name<<ends<<mv2.ticket_Price<<ends<<mv2.timing<<endl;
	return 0;
}
