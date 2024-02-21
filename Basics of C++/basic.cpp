#include<iostream>

namespace aradhana{
int salary = 50000;
}
namespace arpita{
int salary = 100000;
}
int main(){
  std::cout<<"Salary of aradhana"<<" "<<aradhana::salary<<" ";
  std::cout<<"Salary of arpita"<<" "<<arpita::salary;
}

