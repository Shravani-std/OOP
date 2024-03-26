#include<iostream>

using namespace std;

class Stack{
	private:
		//Members
		int stack_Array[100];
        int n = 100;
		int top = -1;
	public:
		void push(int val){
             if(top>=n-1){
                cout<<"stack Overflow"<<endl;
             }
             else{
                top++;
                stack_Array[top] = val;
                    
             }
			// for(int i = 0;i<n;i++){
			// 	cin>>arr[i];
			// }
		}
		void pop(int val){
			if(top <= -1){
                cout<<"Stack underflow"<<endl;
            }
            else{
            
				
                cout<<"Poped "<<stack_Array[top]<<endl;
                top--;
                
            }
			// for(int i = n ; i<=n ; i--){
			// 	top--;
			// }
			// cout<<\n<<endl;
		}

        void display(){
            if(top = -1){
                cout<<"Stack is empty";
            }
            else{
                cout<<"stack elements are:"<<endl;
                for(int i = 0; i < top + 1; i++){
                    cout << stack_Array[i] << " ";
                }
                }
            }
        
};

int main(){
    Stack s;
    int val;
    int n;
    cout<<"Push no. in stack"<<endl;
  
    cout<<"Enter the number of elements in the queue: ";
	cin>>n;
	
	cout<<"enter queue ele.:"<<endl;
	for(int i = 1;i<=n;i++)
	{	
   		 cin>>val;
   		 s.push(val);
	}
//    cout<<"Pop no. in stack"<<endl;
    s.pop(val);

    cout<<"Stack"<<endl;
    s.display();
}
