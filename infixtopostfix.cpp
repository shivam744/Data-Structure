#include<iostream>
using namespace std;
#include <cstring>

int stack[100],top=-1;
char sb,topsb;

int pop()
{
    return (stack[top--]);
}

void push(char x)
   {
  	top++;
   	stack[top]=x;
   }
int priority(char c)
   {
       if(c == '^')
       return 3;
       else if(c == '*' || c == '/')
       return 2;
       else if(c == '+' || c == '-')
       return 1;
       else
       return 0;
   }

int main()
   {
     string exp, postfix;
     int c=0,q=0;
     cout<<"Enter the inf. expression:- ";
     cin>>exp;
     while(exp[c] != '\0')
     {
       sb=exp[c];
       if((sb>='0'&&sb<='9')||(sb>='a'&&sb<='z')||(sb>='A'&&sb<='Z'))
       postfix+=sb;
       else
       {
         while (stack!=NULL&& (priority(stack[top])>=priority(sb)))
         {
           topsb=pop();
           postfix+=topsb;
         }
         push(sb);
       }
       c++;
     }
     while(top!=-1)
     {
       topsb=pop();
       postfix+=topsb;
     }
     cout<<"\nPostfix="<<postfix;
     return 0;
   }
