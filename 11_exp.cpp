#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node*next;
};

struct Node*top = NULL;

struct Node* newnode(){
    return (struct Node*)malloc(sizeof(struct Node));
}
void display(){
    if(top == NULL)
        cout << "Stack is Empty" << endl;

    struct Node*ptr = top;
    while(ptr != NULL){
        cout << ptr->data << "\t";
        ptr = ptr->next;
    }
    cout << endl;
}

void push(int data){
    struct Node* Newnode = newnode();
    Newnode->data = data;
    Newnode->next = top;
    top = Newnode;
}
void pop(){
    if(top == NULL)
        cout << "Stack is Empty";
    else{
    struct Node* temp = top;
    top = top->next;
    free(temp);
    }   
}
int main(){

    while(1){
    int opr_ch;
    cout << "1. Push"<<endl;
    cout << "2. Pop"<<endl;
    cout << "3. Display"<<endl;
    cout << "4. Exit"<<endl;
    cout << "Enter Your Choice: ";
    cin >> opr_ch;

    switch(opr_ch){
        case 1:{
            int data;
            cout << "Enter New Value: ";
            cin >> data;
            push(data);
            break;
        }
        case 2:
        pop();
        break;
        case 3:
        display();
        break;
        case 4:
        exit(0);
        break;
        default:
        cout << "Please Enter a Valid Choice";
        break;
    }
    }
    return 0;
}