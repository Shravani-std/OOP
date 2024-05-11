#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
	
	vector<int>v;
	
	v.push_back(1);
	v.push_back(3);
	v.push_back(6);
	v.push_back(9);
	v.push_back(5);
	v.push_back(7);
	cout<<"Finding 9 if present the return 1 true\n if not return 0:"<<binary_search(v.begin(),v.end(),9)<<endl;
	
	int a = 3;
	int b = 9;
	cout<<"max : "<<max(a,b)<<endl;;
	cout<<"min : "<<min(a,b)<<endl;
	
	//swaping
	swap(a,b);
	cout<<"After swaping \n"<<"a = "<<a<<" and "<<"b = "<<b<<endl;
	
	//reversing
	string abcd = "abcdefgh";
	cout<<"String = "<<abcd<<endl;
	reverse(abcd.begin(),abcd.end());
	cout<<"String after reversing: "<<abcd<<endl;
	
	
	//rotate
	rotate(v.begin(),v.begin()+1,v.end());
	cout<<"After Rotate:"<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
	
	//sorting
	sort(v.begin(), v.end());
    cout << "After Sorting:" << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
	
    return 0;
}
