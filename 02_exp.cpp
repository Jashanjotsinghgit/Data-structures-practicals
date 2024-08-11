// Delete an Element from an array

#include <iostream>
using namespace std;
void print(int arr[],int size)
{
    for (int i=0;i<size;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<"\n"<<endl;
}
int main() {
    // Write C++ code here
    int size= 5;
    int arr[size] = {1,2,3,4,5};
    print(arr,size);
    
    int choice;
    cout<<"1.Enter the Element you want to Delete \n2.Enter the Position";
    cout<<"\n\nEnter Here: ";
    cin>>choice;

    if(choice == 1){
        int delelement;
        cout<<"Enter the Element Here: ";
        cin >> delelement;
        for(int i=0;i<size;i++){
            if(arr[i]== delelement)
            {
                for(int j=i ; j<size; j++){
                    arr[j]=arr[j+1];
                }
                size--;
                print(arr,size);
                break;
            }
        }
    }
    else if(choice ==2 ){
        
        int position;
        cout<<"Enter the Position Here: ";
        cin >> position;
        for(int j=position; j<size; j++){
        arr[j]=arr[j+1];
        }
        size--;
        print(arr,size);
          
    }
    else{
        cout<<"Enter a Valid Choice";
    }
    return 0;
}