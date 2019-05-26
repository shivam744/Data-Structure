//infix to postfix exp
#include<iostream>
#include<string>
using namespace std;
char stk[15],top = 0;
int prio(char p)
{
  if(p=='*'||p =='/')
    return 2;
  if(p=='+'|| p== '-')
  return 1;
  else
  return -1;
}
void push(char p)
{
  stk[++top] = p;
}
char pop(){
  return stk[top--];
}
int main()
{
string init,finl;
  cout<<"Enter Infix Expression:- \n";
  cin>>init;
  int i=0;
  while(init[i]!='\0')
  {
    char ch = init[i];
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')||( ch>=0 && ch<=9 ))
      finl = finl + ch;
    else if(ch=='(')
      push(ch);
    else if(ch==')')
     {
       while(top!=-1&&stk[top]!='(')
       finl+= pop();
       if(stk[top]==')')
       char garb = pop();
     }
     else {
       while((top!=-1)&&(prio(ch)<=prio(stk[top])))
         finl+= pop();
         push(ch);
     }
     i++;
  }
  while(top!=-1)
   finl += pop();
   cout<<"Final postfix expression is : \n\t"<<finl;
   return 0;
}
