#include<iostream>
using namespace std;
int ma = 10;
int front = -1;
int rear = 0;
int ele;
void insert(int arr[]){
  if(front == -1)
  {
    cout<<"Queue was empty\n";
    cout<<"Enter first element\n";
    cin>>ele;
    front = 0;
    rear = 0;
    arr[0] = ele;
    return;
  }
  else if(rear == ma -1)
  {
    cout<<"\tOverflow can't insert element\n";
    return;
  }
  else{
    cout<<"Enter the value of element\n";
    cin>>ele;
    arr[rear+1] = ele;
    rear = rear + 1;
    return;
  }
}
void delet(int arr[]){
	if(front == ma - 1 )
  {
    front = -1;
    rear = 0;
    cout<<"Queue Emptied";
  }
  else{
  	if(front == -1)
  	{
    	cout<<"Queue is empty #Underflow\n";
    	return;
    	}
  	else{
    	front = front+1;
  		}
	}
}
void display(int arr[]){

      if (front == -1)
      {
          cout<<"\nQueue is Empty";
          return;
      }

      else
      {
      	cout<<"\nElements in Queue are: -> ";
          for (int i = front; i<=rear; i++)
              cout<<arr[i]<<";";
      }
      cout<<endl;
  }

int main() {
  cout<<"Enter value of the max size"<<endl;
  cin>>ma;
int arr[ma];
int ch;
while(ch!=4)
{
	cout<<"\n\n1) Insert \n2) Delete \n3) Display \n4) exit\n\n";
	cin>>ch;
	switch(ch){
  case(1) : {
    insert(arr);
    break;
  }
  case(2) : {
    delet(arr);
    break;
  }
  case(3) : {
    display(arr);
    break;
  }
  case(4) :{
	break;
  }
  default : {
    cout<<"\nWrong Keyword!!!\n";
    break;
  }
    }
      }
return 0;
}
