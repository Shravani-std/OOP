#include<iostream>
using namespace std;

int main(){
	string movie_Name;
	int adult_TP, child_TP;
	int no_of_At_sold, no_ofC_sold;
	int charity;
	
	cout << "Enter movie name:" << endl;
	cin >> movie_Name;
	
	cout << "Enter adult ticket price:" << endl;
	cin >> adult_TP;
	
	cout << "Enter child ticket price:" << endl;
	cin >> child_TP;
	
	cout << "Enter no. of adult tickets sold:" << endl;
	cin >> no_of_At_sold;
	
	cout << "Enter no. of child tickets sold:" << endl;
	cin >> no_ofC_sold;
	
	cout << "Enter Amount Donated:" << endl;
	cin >> charity;
	
	cout << "Movie Name:.................... " << movie_Name << endl;
	cout << "Adult Ticket price:............ " << adult_TP << endl;
	cout << "Child Ticket price:............ " << child_TP << endl;
	cout << "No. of adult tickets sold:..... " << no_of_At_sold << endl;
	cout << "No. of child tickets sold:..... " << no_ofC_sold << endl;
	cout << "Amount Donated:................ " << charity << endl;
	
	return 0;
}

