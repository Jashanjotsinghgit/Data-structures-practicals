// Program to use push and pop operations in an linear array

#include <iostream>
using namespace std;
#define size 10
int arr[size], top = -1;

void display(){
    cout << "New Array is:\n";
    for (int i = 0; i <= top; i++)
        cout << arr[i] << "\t";
    cout << "\n";
}
void push(int n){
    if(top == size -1)
        cout << "Overflow, Stack is Fulled";
    else
    arr[++top] = n; // Push Operation
    display();
}
int pop(){
       if (top == -1)
                cout << "Underflow, No Element is present in the array, to be deleted";
            else
                top--;
    display();
    return arr[top+1];
}
int main()
{
    int ch,newelement;
    while (1)
    {
        cout << "\n1.Push\n2.Pop\n3.Exit";
        cout << "\nEnter your choice: ";
        cin >> ch;
        
        switch (ch)
        {
        case 1:{
                cout << "Enter the Element: ";
                cin >> newelement;
                push(newelement); 
                break;
        }
        
        case 2:
              pop();
              break;
            
        case 03:
            exit(0);
        
        default:
            cout<< "Please, Enter a Valid choice";
            break;
        }
    }

    return 0;
}
