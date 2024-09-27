#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node*next;
};

struct Node*head = NULL;
struct Node*last = NULL;

void display(){
    if(head == NULL)
        cout << "Linked List is Empty" << endl;

    struct Node*ptr = head;
    while(ptr != NULL){
        cout << ptr->data << "\t";
        ptr = ptr->next;
    }
    cout << endl;
}

struct Node* newnode(){
    return (struct Node*)malloc(sizeof(struct Node));
}
void insert_beg(int newdata){
    struct Node* Newnode = newnode();
    Newnode->data = newdata;
    Newnode->next = head;
    head = Newnode;
}
void insert_end(int newdata){
    struct Node* Newnode = newnode();
    Newnode->data = newdata;
    Newnode->next = NULL;
    last = head;

    while(last->next != NULL)
        last = last->next;

    last->next = Newnode;
}
void insert_spec(int newdata,int pos){
    struct Node* Newnode = newnode();
    Newnode->data = newdata;

    struct Node*curr = head;
    for (int i=1; i<pos-1; i++)
        curr= curr->next;

    Newnode->next = curr->next;
    curr->next = Newnode;
}
void delete_beg(){
    if(head == NULL)
        cout << "Linked List is Already Empty" << endl;
    else{
    struct Node* temp  = head;
    head = head-> next;
    free(temp);
    }
}
void delete_end(){
    struct Node*secondlast = head;
    while(secondlast->next->next != NULL)
     secondlast= secondlast->next;

    free(secondlast->next);
    secondlast->next = NULL;
}
void delete_spec(int pos){
    struct Node*temp = head;
    struct Node*prev = NULL;

    for(int i=1 ; temp != NULL && i<pos; i++){
        prev = temp;
        temp = temp->next;
    }

    prev->next = temp->next;
    free(temp);
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
            int newdata;
            cout << "Enter the New Data Value: ";
            cin >> newdata;
            int pos_ch;
            cout << "1. At the Begining"<<endl;
            cout << "2. At the End"<<endl;
            cout << "3. At the Specific Position"<<endl;
            cout << "Enter Your Choice: ";
            cin >> pos_ch;
            switch(pos_ch){
                case 1:
                insert_beg(newdata);
                break;
                case 2:
                insert_end(newdata);
                break;
                case 3:{
                int pos;
                cout << "Enter the Position: ";
                cin >> pos;
                insert_spec(newdata,pos);
                break;
                }
                default:
                cout << "Please Enter a Valid Choice" << endl;
                break;
            }
            break;
        }
        case 2:{
            int pos_ch;
            cout << "1. At the Begining"<<endl;
            cout << "2. At the End"<<endl;
            cout << "3. At the Specific Position"<<endl;
            cout << "Enter Your Choice: "<<endl;
            cin >> pos_ch;
            switch(pos_ch){
                case 1:
                delete_beg();
                break;
                case 2:
                delete_end();
                break;
                case 3:{
                int pos;
                cout << "Enter the Position: ";
                cin >> pos;
                delete_spec(pos);
                break;
                }
                default:
                cout << "Please Enter a Valid Choice" << endl;
                break;
            }
            break;
        }
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