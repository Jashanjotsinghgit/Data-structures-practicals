#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node*next;
};

struct Node*front = NULL;
struct Node*rear = NULL;

struct Node* newnode(){
    return (struct Node*)malloc(sizeof(struct Node));
}
void display(){
    if(rear == NULL)
        cout << "Queue is Empty" << endl;

    struct Node*ptr = front;
    while(ptr != NULL){
        cout << ptr->data << "\t";
        ptr = ptr->next;
    }
    cout << endl;
}

void insert(int data){
    struct Node* Newnode = newnode();
    Newnode->data = data;
    Newnode->next = NULL;
    if(front== NULL && rear==NULL)
        front=rear=Newnode;
    else{
    rear->next = Newnode;
    rear = rear->next;
    }
}
void del(){
    struct Node* temp = front;
    if(front == NULL)
        cout << "Queue is Already Empty";
    else if(front==rear){
        front=rear=NULL;
        free(temp);
    }
    else{
        front= front->next;
    free(temp);
    }
    }   

int main(){

    while(1){
    int opr_ch;
    cout << "1. Insert"<<endl;
    cout << "2. Delete"<<endl;
    cout << "3. Display"<<endl;
    cout << "4. Exit"<<endl;
    cout << "Enter Your Choice: ";
    cin >> opr_ch;

    switch(opr_ch){
        case 1:{
            int data;
            cout << "Enter New Value: ";
            cin >> data;
            insert(data);
            break;
        }
        case 2:
        del();
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