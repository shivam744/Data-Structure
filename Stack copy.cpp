//To copy data from one stack to another
#include <iostream>
using namespace std;
#define Max 100
class stack{
	public:
		int arr[100];
		int top;
		stack()
		{
			top = -1;
		}
		void push(int x){
			if(top == Max-1)
				cout<<"Overflow!\n";
			else
				arr[++top] = x;
		}
		int pop(){
			if(top == -1)
				cout<<"Underflow!\n";
			else
				return(arr[top--]);
		}
		void display(){
			int temp = top;
			cout<<"\n";
			while(temp!= -1)
		{
			cout<<arr[temp]<<" ";
			temp--;}
		}			
	};
	int main(){
		stack first,second;
		int arr[Max];
		for(int i =0;i<10;i++)
		{
			first.push(i);
		}
		cout<<"Elements after insertion are:-\n";
		first.display();
		int j=0;
		while(first.top!=-1){
			arr[j]=first.pop();
			j++;
		}
		j--;
		for(int i = j;i>-1;i--){
			first.push(arr[i]);
			second.push(arr[i]);
		}
		cout<<"Elements in First are:-\n";
		first.display();
		cout<<"\nELements in Second are:-\n";
		second.display();
		return 0;
		
		
	}
