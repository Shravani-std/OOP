#include <iostream>
using namespace std;

class Function{
	
	private:
		int num1,num2;
	public:
		Function(int a = 0,int b = 0){
			num1 = a;
			num2 = b;
		}
		
	void add(int a, int b)
	{
  		cout << "sum = " << (a + b);
	}

	void add(double a, double b)
	{
		cout << endl << "sum = " << (a + b);
	}
};
int main()
{
	Function f1;
	f1.add(10, 2);
	f1.add(5.3, 6.2);

	return 0;
}

