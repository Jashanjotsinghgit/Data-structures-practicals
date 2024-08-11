// Program to convert Infix to Postfix using stacks

#include <iostream>
using namespace std;
#define size 50
char stack[size], top = -1;

int presedence(char a){
    if(a=='+' || a=='-')
        return 1;
    else if( a=='*' || a=='/')
        return 2;
    else if(a=='^')
        return 3;
    else 
        return 0;
}

void display()
{
    cout << "Stack:\n";
    for (int i = 0; i <= top; i++)
        cout << stack[i] << "  ";
    cout << "\n";
}
void push(char n)
{
    stack[++top] = n; // Push Operation
}
char pop()
{
    if (top<0)
        cout << "Underflow, No Element is present in the array, to be deleted";
    else
        top--;

    return stack[top + 1];
}
int main()
{
    char prefix[] = "(A+(B*C-(D/E^F)*G)*H)";
    int len = sizeof(prefix) / sizeof(prefix[0]), po = 0;
    char postfix[50];

    for (int i = 0; i < len; i++)
    {
        if(prefix[i] == '(' )
            push(prefix[i]);
        else if (prefix[i] == '+' || prefix[i] == '-' || prefix[i] == '*' || prefix[i] == '/' ||  prefix[i] == '^')
        {
            if(presedence(prefix[i]) >= presedence(stack[top]))
            push(prefix[i]);
            else{
                postfix[po++] = pop();
                push(prefix[i]);
            }
        }
        else if (prefix[i] == ')')
        {
            cout << "Encounted )"<<endl;
            while (stack[top] != '(')
            {
                postfix[po++] = pop();
            }
            pop();
        }
        else
        {
            postfix[po++] = prefix[i];
        }

        display();
        cout << "Postfix\n";
        for (int j = 0; j <= po; j++)
        {
            cout << postfix[j] << "  ";
        }
        cout << "\n";
    }

    cout << "\nPrefix Expression is : " << prefix << endl;
    cout << "Postfix Expression is : " << postfix << endl;

    return 0;
}