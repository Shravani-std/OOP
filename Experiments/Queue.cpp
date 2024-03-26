#include<iostream>
using namespace std;

class Queue{
    private:
    	int arr[100];
    	int n = 100;
//		int n;
    	int front = -1,rear = -1;
    public:
    	void insert(int val){
    		

    		if(rear == n-1){
    			cout<<"Stack Overflow"<<endl;
			}
			else{
				if(front == -1){
					front = 0;
					
				}
				rear++;
				arr[rear] = val;
			}
						}
		
		
		void remove(){
			if(front == -1 || front > rear){
				cout<<"Stack underflow"<<endl;
				
			}
			else{
				cout<<"Remove no.:"<<arr[front]<<endl;
				front++;
			}
		}
		
	void display(){
            if(front == -1 && rear == -1){
                cout<<"Queue is empty"<<endl;
            }
            else{
                cout<<"Queue elements are:"<<endl;
                for(int i = front; i <= rear; i++){
                    cout << arr[i] << " ";
                }
                cout << endl;
            }
        }
};
int main(){
	Queue q;
	int val;
	int n;
//	int n;
//	cout<<"enter no. of elements in queue: "<<endl;
//	cin>>q.n;
	cout<<"Enter the number of elements in the queue: ";
	cin>>n;
	cout<<"enter queue ele.:"<<endl;
	for(int i = 1;i<=n;i++){
			
	        cin>>val;
	
//	cout<<"inserted ele is: "<<val<<endl;
		q.insert(val);
	}
		q.remove();
	q.remove();
	q.display();
		return 0;
}
