#include<iostream>
using namespace std;
struct node{
  int data;
  node* next;
};
class Stack_ll{
public:
  node* top;
  stack_ll()
  { top = NULL; }
  void push(){
	node* p = new node();
  	cout<<"Enter data to be inserted :\t";
  	cin>>p->data;
  	cout<<endl;
  	p->next= top;
  	top = p;
  }
  void pop(){
    if(top == NULL){
      cout<<"Underflow (No element present)"<<endl;
      return; }
    cout<<top->data<<"	deleted"<<endl;
    node*p = top;
    top = top->next;
    delete p;
  }
  void display(){
    if(top==NULL){
		cout<<"Underflow : No elements present\n";
    	return;}
    cout<<"Elements in given Stack are:\n";
    node*p = top;
    cout<<"top-->";
    while(p!=NULL){
      	cout<<" "<<p->data<<"\n";
      	p = p->next;
    }
  }
};
int main()
{
      Stack_ll st;
      char ch;
      do
      {
            cout<<"--------//--------\nChoose from following: \np for Push \no for Pop \nd for Display \nq for Quit\n--------//--------\n";
            cin>>ch;
            switch(ch)
            {
                  case 'p': st.push();break;
                  case 'o': st.pop();break;
                  case 'd': st.display();break;
                  case 'q': break;
                  default: cout<<"Wrong Keyword\n"; break;
            }
      }while(ch!='q');
      return 0;
}
