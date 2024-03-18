#include <iostream>  
#include <istream>  
#include <sstream>  
using namespace std;  
  
int main()  
{  
    istringstream s("       Hello World!");  
    string line;  
    getline(s >> ws, line);  
    cout<< line << "\"\n";  
    return 0;  
}  