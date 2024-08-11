// Linear Search

#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    
    int arr[5] = {1,2,3,4,5};
    for(int i=0; i<5; i++){
        cout<<arr[i]<<"\t";
    }
    int element,comp,chk;
    cout <<"\n\nEnter Element you want to find: ";
    cin >> element;
    
     for(int i=0; i<5; i++){
        if(arr[i] == element){
            comp++;
            chk++;
            cout<<"Congratulations Element "<<element<<" found at Index "<<i<< " After "<<comp<<" Comparisons"<<endl;
        }
        else{
            comp++;
        }
    }
    if(chk==0)
    cout<<"Element not Found after all the comparisons";
    return 0;
}