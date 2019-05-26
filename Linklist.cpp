#include <iostream>
using namespace std;
class node
{
public:
  int data;
  node* next;
  node(int val)
  {
    data = val;
    next = NULL;
  }
};
class Link_list
{
public:
  node* start;
  node* ptr;
  Link_list()
  {
    int val;
    cout<<"\nEnter the value to be inserted in first place of the list\n";
    cin>>val;
    start = new node(val);
    ptr = start;
  }
  Link_list(int val)
  {
    start = new node(val);
    ptr = start;
  }
  void add_node()
  {
    cout<<"\nEnter value to be inserted in new node\n";
    int val;
    cin>>val;
    ptr->next = new node(val);
    ptr = ptr->next;
  }
  void add_node(int val)
  {
    ptr->next = new node(val);
    ptr = ptr->next;
  }
  void show_list()
  {
    cout<<"\nElements in your list:\n";
    node* ptr2 = start;
    while (ptr2!=NULL)
    {
      cout<<(ptr2->data)<<"\n";
      ptr2 = ptr2->next;
    }
  }
};
int main()
{
  Link_list l1,l2(30);
  l1.add_node();
  l1.add_node(20);
  l1.show_list();
  l2.add_node();
  l2.add_node(50);
  l2.show_list();
}

