// To Make an array and create a menu driven program to insert dlt show exit and search an element in the array
//I am doing it in C++
#include<iostream>
using namespace std;
int size;
void show(int arr[]){
  for(int i =0;i<size;i++)
  {
    cout<<i+1<<") "<<arr[i]<<endl;
  }
}
void delt(int arr[],int pos)
{
    for(int i = pos - 1;i<size-1;i++)
    {
      arr[i] = arr[i+1];
    }
    size--;
}
void insert(int arr[],int ele,int pos)
{
	int chk;
	int temp1;
	int temp;
	cout<<"Do you want to increase size of array? (1/0)\n";
    cin>>chk;
  if(chk == 1)
  {
  	size++;
  	temp = arr[pos-1];
  	arr[pos-1] = ele;
    for(int i = pos;i<size;i++)
    {
    	temp1 = temp;
          temp = arr[i];
          arr[i] = temp1;          
    }
  }
  else if(chk == 0)
  {
    temp = arr[pos-1];
  	arr[pos-1] = ele;
    for(int i = pos;i<size;i++)
    {
    	temp1 = temp;
          temp = arr[i];
          arr[i] = temp1;          
    }
  }
  else{
    cout<<"\nwrong keyword try again \n";
  }
}
void search(int arr[], int ele)
{
  int flag2 = 0;
  for(int i =0;i<size;i++)
  if(arr[i]==ele)
  {
    flag2 = 1;
    cout<<"Element found at position "<<i+1<<"\n";
    break;
  }
  if(flag2==0)
  {
    cout<<"Element not found try again";
  }
}
int main()
{
  cout<<"Enter the Size of the Array to be created"<<endl;
  cin>>size;
  int arr[100];
int i=0;
  cout<<"Enter the elements of Array"<<endl;
  for(i = 0;i<size;i++)
  {
    cin>>arr[i];
  }
  int flag = 1;
  int choice;
  while(flag)
  {cout<<"\n Enter Choice:\n";
  cout<<"1) Show Array\n2) Delete an Element \n3) Insert an Element \n4) Search an Element \n5) Exit\n ";
  cin>>choice;
    switch (choice) {
      case 1:{ show(arr);
              break;
             }
      case 2: {
        cout<<"\nEnter index of element to be deleted\n";
        int pos;
        cin>>pos;
        delt(arr,pos);
        break;
      }
      case 3:{
      	cout<<"\nBefore index (B) \nAfter Index(A) \nOn index (N)\n";
      	char checking;
		cin>>checking;
      	switch(checking)
      	case 'N' :
		{
		cout<<"Enter element and its position to be inserted\n";
        int ele;
        int pos;
        cin>>ele;
		cin>>pos;
        insert(arr,ele,pos);
		break;
		}
        case 'B' : {
		cout<<"Enter element and the position before it is to be inserted\n";
        int ele;
        int pos;
        cin>>ele;
		cin>>pos;
		pos--;
        insert(arr,ele,pos);
		break;}
       case 'A' :{
		cout<<"Enter element and the position after it is to be inserted\n";
        int ele;
        int pos;
        cin>>ele;
		cin>>pos;
		pos++;
        insert(arr,ele,pos);
		break;}
        break;
      }
      case 4:{
        cout<<"Enter element to be searched:\n";
        int ele;
        cin>> ele;
        search(arr,ele);
        break;
      }
      case 5:{
        exit(1);
      }
      default:{
        cout<<"Wrong keyword pls Choose again :)\n";
      }
    }
  }
  return 0;
}


