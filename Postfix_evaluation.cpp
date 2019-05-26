#include<iostream>
#include<string>
using namespace std;
int stk[25];
int top = 0;
void push(int p)
{
  stk[++top] = p;
}
int pop(){
  return stk[top--];
}
int solve(string s)
{
  int i =0;
  char ch;
  int val;
  while(ch = s[i]!='\0')
  {if(ch>='0'||ch<='9')
   {
   	 push(int(ch));}
   else
    {
      int op = pop();
      int opa = pop();
      switch (ch)
      {
        case '+' :{
		val = opa + op;
        push(val);
        break;}
        case '-' :{
		val = opa - op;
        push(val);}
        break;
        case '*' :{
		val = opa * op;
        push(val);
        break;}
        case '/' : {
		val = opa / op;
        push(val);
        break;}
      }
    }i++;
  }
  return pop();
}
int main()
{
  string expr;
  cout<<"Enter postfix expression:\n";
  cin>>expr;
  int valu;
  valu = solve(expr);
  cout<<"After solving ans is: "<<valu;
  return 0;
}
