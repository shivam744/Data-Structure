#include<iostream>
using namespace std;
#define MAX 100
class Stack
{
    int top;
public:
    int a[MAX];

    Stack()  { top = -1; }
    bool push(int x);
    int pop();
    void display();
};

bool Stack::push(int x)
{
    if (top >= (MAX-1))
    {
        cout << "Stack Overflow";
        return false;
    }
    else
    {
        a[++top] = x;
        cout<<"\n"<<x<<" pushed in stack\n";
        return true;
    }
}

int Stack::pop()
{
    if (top < 0)
    {
        cout << "Stack Underflow";
        return 0;
    }
    else
    {
        int x = a[top--];
        return x;
    }
}
void Stack::display()
{
	cout<<"Elements in the Stack are:\n";
	if(top == -1)
	{
		cout<<"Underflow : No elements present\n";
	}
	else{
	cout<<"top-->";
	for(int i=top;i>=0;i--)
	{
		cout<<" "<<a[i]<<"\n";
	}
}
}
int main()
{   int flag = 1;
    Stack t;
	while(flag!=3)
	{
		cout<<" ----------//---------\nChoose from the following: \n1) Push an element. \n2) Pop an element. \n3) Show the elemets in stack \n4) Exit\n----------//---------\n";
	int nun;
	cin>>nun;
	switch(nun){
    	case 1:{
    		int ele;
    		cout<<"Enter the element to be pushed\n";
    		cin>>ele;
    		t.push(ele);
			break;
		}
		case 2:{
			cout << t.pop() << " Popped from stack\n";
			break;
		}
		case 3:{
			t.display();
			break;
		}
		case 4:{
			flag = 3;
			break;
		}
	}
}
    return 0;
}
