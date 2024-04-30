#include <iostream>
using namespace std;

class Complex{
	private:
		int real;
		int img;
	public: 
		Complex(int r=0, int i=0){
		 	real = r;
		 	img = i;
		} 
		friend ostream& operator<<(ostream &out, const Complex &c); 
		friend istream& operator>>(istream &in, Complex &c);
};

ostream& operator<<(ostream &out, const Complex &c){ 
	out << c.real;
	out << " +i " << c.img;
	return out;
}

istream& operator>>(istream &in, Complex &c){ 
	cout << "Enter real: " << endl;
	in >> c.real;
	cout << "Enter img: " << endl;
	in >> c.img;
	return in;
}

int main(){
	Complex c1;
	cin >> c1;
	cout << "Final obj = ";
	cout << c1;
	return 0;
}

