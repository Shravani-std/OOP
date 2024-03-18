
#include<iostream>
class Node
{
    public:
	int data;
	Node*next;

};

class List{
	private:
      Node *head;
      
      	public:
		List(){

	 head = nullptr;	
		}
		void insert(int d){
             Node*newNode = new Node;
			 newNode->next = d;
			 newNode->next = nullptr;
			 head = newNode;
		}
		void display(){
			if(head != nullptr){
				std::cout<<head -> data;
			}
		}
	  
// 		int insert(int data,int*next,int head,int Node){
// 		   std:: cout<<"Enter data"<<std::endl;
// 		   std::cin>>data;
// 		   head = Node*data;
// 		}
};
//Linked List

int main(){
    //  Node n1;
	//  n1.insert(data,*next,head,Node);
	//  int *ptr;
	//  int n;
	//  std::cout<<"Enter no. of elements"<<std::endl;
	//  std::cin>>n;
	//  ptr = (int*)malloc(n*sizeof(int));
	 
	//  std::cout<<"Enter no. in array"<<std::endl;
	//  for(int i = 0;i<n;i++){
	//  	ptr[i] = i + 1;
	//  }
	//  std::cout<<"Display array"<<std::endl;
	//   for(int i = 0;i<n;i++){
	//  	std::cout<<ptr[i];
	//  }
	//  std::cout<<endl;
	List l1;
	l1.insert(2);
	l1.display();
}



