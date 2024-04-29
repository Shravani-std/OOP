#include<iostream>
#include<list>
#include<string>
using namespace std;

class Youtube_Channel{
	public:
	string channel_name;
	int no_of_Subscribers; 

	public:
		Youtube_Channel(string cn , int users)
		{
			channel_name = cn;
			no_of_Subscribers = users;
		}		
};
class MyCollections{
	public:
		list<Youtube_Channel> mylist;
		void operator += (Youtube_Channel& channel){
			mylist.push_back(channel);
		}
	
};
ostream& operator << (ostream& COUT , Youtube_Channel& channel)
	{
		COUT << channel.channel_name;
		COUT << channel.no_of_Subscribers;
	}
	ostream& operator << (ostream& COUT, MyCollections& mc)
	{
		for(Youtube_Channel ytc: mc.mylist)
		COUT << ytc;
		return COUT;
	}
//class Subscribed_Channels{
//	int no_of_subscribers;
//};
//
//operator +( Youtube_Channel, Subscribed_Channels){
//	Subscribed_Channels = Subscribed_Channels + Youtube_Channel;
//}

int main(){
	
//	Subscribed_Channels; 
      Youtube_Channel yc1("Scaby", 10000);
      Youtube_Channel yc2("TobiRay", 20000);
      
      MyCollections mc;
      mc += yc1;
      mc += yc2;
      cout<<mc;
      return 0;
//      sc3 = sc1 + sc2;
//    operator+(Youtube_Channel,Subscribed_Channels );	
}
