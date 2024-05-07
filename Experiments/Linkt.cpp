#include <iostream>
#include<string>
using namespace std;

class Node{
    public :
    int data;
    Node*next;
};
class List{
    public:Node* head;
    public:
    List()
    {
        Node* head;
        head=nullptr;
    }
    
    int insert(int data)
    {
        Node* newNode= new Node;
        newNode->data=data;
        newNode->next=head;
        cout<<data;
        return 0;
    }
};

    
int main(){
 
 List l1;
 l1.insert(5);
}
 
