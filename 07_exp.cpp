// Program to evaluate the postfix expression using stack

#include <iostream>
using namespace std;
#define size 10
int stack[size], top = -1;

void display()
{
    cout << "New stack is:\n";
    for (int i = 0; i <= top; i++)
        cout << stack[i] << "\t";
    cout << "\n";
}
void push(int n)
{
    stack[++top] = n; // Push Operation
    display();
}
char pop()
{
    if (top == -1)
        cout << "Underflow, No Element is present in the stackay, to be deleted";
    else
        top--;
    
    return stack[top + 1];
}
int main()
{
    char expression[100];
    cout << "Enter the Expression here: ";
    cin >>expression;
    int len=0;
    while(expression[len] != '\0'){
        len++;
    }

    for (int i = 0; i < len; i++)
    {
        char ch= expression[i];
        switch(ch)
        {
            case '+':{
            int a= int(pop());
            int b= int(pop());
            push(a+b);
            break;
            }

            case '-':{
            int a= int(pop());
            int b= int(pop());
            push(b-a);
            break;
            }
            
            case '*':{
            int a= int(pop());
            int b= int(pop());
            push(b*a);
            break;
            }
            
            case '/':{
            int a= int(pop());
            int b= int(pop());
            push(b/a);
            break;
            }
            
            case '%':{
            int a= int(pop());
            int b= int(pop());
            push(b%a);
            break;
            }
            
            default: 
            push(ch -'0');
            break;
        }      
    }

    cout << "\nThe Result of the expression is "<< stack[top]<<endl;
    return 0;
}