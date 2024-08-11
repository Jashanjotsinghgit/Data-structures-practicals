// Insert an Element in an Array

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

    int newelement,choice;
    cout<<"Enter new Element: ";
    cin>>newelement;
    
    cout<<"\n1.To add an Element at End\n2.To add an Element at given Index";
    cout<<"\n\nEnter Here: ";
    cin>>choice;
    
    if(choice == 1){
      arr[size++] = newelement;
        cout<<"\nNew Array is : "<<endl;
        print(arr,size);
    }
    else if(choice == 2)
    {
        int position;
        cout<<"\nEnter Position of the Element: ";
        cin >> position;
        
        if(position>size || position<0){
            cout<<"Enter a Valid Positon";
        }
        else{
            for(int i=size;i>position; i--){
            arr[i] = arr[i-1];
        }
        size++;
        arr[position] = newelement;
        }
        cout<<"\nNew Array is: "<<endl;
        print(arr,size);
       
    }
    else
    {
         cout<<"\nEnter a Valid choice";
    }
   
    return 0;
}