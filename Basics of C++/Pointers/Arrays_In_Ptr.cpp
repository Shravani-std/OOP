#include<iostream>
using namespace std;
int main(){
   int arr[3] = {10,20,30};
   int *ptr1 = &arr[0];
   cout<<*ptr1<<endl;
    int *ptr2 = &arr[1];
   cout<<*ptr2<<endl;
    int *ptr3 = &arr[2];
   cout<<*ptr3<<endl;
   
   cout<<&arr[0]<<endl;
   
//   ptr1++;
//   cout<<arr[3]<<endl;
   
   cout<<*arr<<endl;
    int *ptr = arr;
   for(int i=0;i<3;i++){
   	cout<<*ptr<<endl;
   	ptr++;
   }
}
