#include<iostream>
using namespace std;


class Person
{
   public: 
   string name; 
   string address;
   int age;
};

class Employee : public Person
{
   public: 
   int id;
   int salary;

  public: void getData()
{
  cout << "Enter name: ";
  cin >> name;

  cout << "Enter address: ";
  cin >> address;

  cout << "Enter age: ";
  cin >> age;

  cout << "Enter id: ";
  cin >> id;

  cout << "Enter salary: ";
  cin >> salary;

 }

public: void displayData()
{
  cout << "Name: " << name << endl;
  cout << "Address: " << address << endl;
  cout << "age: " << age << endl;
  cout << "id: " << id << endl;
  cout << "Salary: " << salary << endl;
}
};

int main()
{
  Employee em;
  em.getData();
  em.displayData();
  return 0;
}
