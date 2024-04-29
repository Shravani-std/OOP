#include<iostream>
#include<list>
#include<string>
using namespace std;

class Youtube_Channel{
	private:
	string channel_name;
	int no_of_Subscribers; 

	public:
		Youtube_Channel(string cn , int users){
			channel_name = cn;
			no_of_Subscribers = users;
		}
		Youtube_Channel operator+(Youtube_Channel &yc){
			Youtube_Channel obj("default", 0);
			obj.channel_name = channel_name + yc.channel_name;
			obj.no_of_Subscribers = no_of_Subscribers + yc.no_of_Subscribers;
			return obj;
		}
		void print(){
			cout<<channel_name<<ends<<"No. of subscribers:"<<no_of_Subscribers<<"\n";
		}
};

int main(){
	
//	Subscribed_Channels; 
      Youtube_Channel yc1("MyChannel-1", 10000);
        Youtube_Channel yc2("MyChannel-2",2000);
         Youtube_Channel ans=yc1 + yc2;
         ans.print();
      return 0;

}
