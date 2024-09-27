//Implementation of Linear Queue

#include <iostream>
using namespace std;
int queue[50],front=-1,rear=-1;

void display(){
    for (int i=front; i <=rear ;i++)
        cout << queue[i] << "\t";
    cout << "\n";
}

void enqueue(){
    int newelement;

    cout << "Enter New Element: ";
    cin >> newelement;
    if(front==-1 && rear ==-1){
        front =0; rear =0;
    }
    else if(front == rear+1){
        cout << "Overflow, Queue is Full";
        return;
    }
    else {
        rear++;
    }
    queue[rear] =  newelement;
    display();
}

void dequeue(){
    if(front==-1)
        cout << "\nUnderflow, Queue is Empty";
    else if(front==rear){
        front=0; rear =0;
    }
    else 
        front++;
    display();

}


int main()
{
    int operation_choice;
    while (1)
    {
        cout << "Select Your Choice : " << endl;
        cout << "1. Enqueue Operation" << endl;
        cout << "2. Dequeue Operation" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter Your Choice : ";
        cin >> operation_choice;
        switch (operation_choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\nInvalid Choice!!\n");
            break;
        }
    }
    return 0;
}