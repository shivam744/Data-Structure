#include<iostream>
using namespace std;
#include <cstring>
int stack[20];
int top = -1;
void push(int x)
{
    stack[++top] = x;
}
 
int pop()
{
    if(top == -1)
    {
        cout<<"UNDERFLOW";
        return -1;
    }
    else return stack[top--];
}
 
int evaluate(string x)
{
    int i = 0,value = 0;
    char symb;
	int opnd2,opnd1;
    while(x[i]!='\0')
    {
        symb = x[i];
        if(symb >= '0' && symb <= '9')
            push(symb - '0');
        else
        {
            opnd2 = pop();
            opnd1 = pop();
            switch(symb)
            {
                case '+':
                    value = opnd1 + opnd2;
                    break;
                case '-': 
                    value = opnd1 - opnd2;
                    break;
                case '*':
                    value = opnd1 * opnd2;
                    break;
                case '/':
                    value = opnd1 / opnd2;
                    break;
            }
            int pushval = value;
            push(pushval);
        }
        i++;
    }
    return(pop());
}

int main()
{
    string exp;
    int value;
    cout<<"Enter the Postfix expression :: ";
    cin>>exp;
    value = evaluate(exp);
    cout<<"value: "<<value<<endl;
    return 0;
}
