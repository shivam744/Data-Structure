#include<iostream>
using namespace std;
int maxz = 10;
int front = -1;
int rear = 0;
int ele;
int next(int x){
  if(x == (maxz -1))
    return 0;
  else
    return ++x;
}
void insertz(int arr[]) {
  if(front == -1)
  {
    cout<<"Queue is empty\n";
    cout<<"Enter first element\n";
    cin>>ele;
    front = 0;
    rear = 1;
    arr[0] = ele;
    return;
  }
  else if(rear == front)
  {
    cout<<"\tOverflow can't insert element\n";
    return;
  }
  else{
    cout<<"Enter the value of element\n";
    cin>>ele;
    arr[rear] = ele;
    rear = next(rear);
    return;
  }
}
void delet(int arr[]){
	if(next(front) == rear )
  {
    front = -1;
    rear = 0;
    cout<<"Queue is Emptied";
    return;
  }
  else if(front == -1)
  	{
    	cout<<"Queue is empty #Underflow\n";
    	return;
    	}
  else{
    	front = next(front);
      return;
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
      	cout<<"\nElements in Queue are: ->  ";
      	cout<<arr[front]<<";";
          for (int i = front+1; i!=rear; i=next(i))
              cout<<arr[i]<<";";
              return;
	  }
      cout<<endl;
  }

int main() {
  cout<<"Enter value of the max size"<<endl;
  cin>>maxz;
int arr[maxz];
int ch = 0;
while(ch!=4)
{
	cout<<"\n\n1) Insert \n2) Delete \n3) Display \n4) exit\n\n";
	cin>>ch;
	switch(ch){
  case(1) : {
    insertz(arr);
    cout<<"rear = "<<rear<<endl;
    cout<<"front = "<<front<<endl;
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
