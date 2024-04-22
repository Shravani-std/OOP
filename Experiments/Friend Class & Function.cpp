// C++ Program to demonstrate the
// functioning of a friend class
#include <iostream>
using namespace std;

class MainClass {
private:
	int private_variable;

protected:
	int protected_variable;

public:
	MainClass()
	{
		private_variable = 50;
		protected_variable = 100;
	}

	// friend class
	friend class Friend;
};


class Friend {
public:
	void display(MainClass& x)
	{
		cout << "The value of Private Variable = "
			<< x.private_variable << endl;
		cout << "The value of Protected Variable = "
			<< x.protected_variable;
	}
};

// Driver code
int main()
{
	MainClass mc;
	Friend fd;
	fd.display(mc);
	return 0;
}

