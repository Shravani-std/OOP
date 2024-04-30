#include <iostream>
using namespace std;

class Complex{
	private:
		int real;
	protected:
		int img;
		
	public:
		Complex(){
			real = 120;
			img = 352;
		}
		friend class Fd;
};

class Fd{
	public:
		void display(Complex& fd){
		
		cout<<"Real= "<<fd.real<<endl;
		cout<<"Img= "<<fd.img;
	}
};

int main(){
	Complex f;
	Fd f1;
	f1.display(f);
	return 0;
}


