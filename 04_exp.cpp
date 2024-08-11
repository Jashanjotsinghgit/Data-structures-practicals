// Binary Search
//Pre-Requiste : Array Must be Sorted

#include<iostream>
using namespace std;
void display(int arr[],int n){
    cout << "\nElements of an Array is: \n";
    for(int i=0;i<n;i++)
    cout << arr[i] << "\t";
}
int main(){

    int arr[]={1,2,3,4,5,6,7,8,9,10,22,45,87,90};
    int length =  sizeof(arr)/sizeof(arr[0]);
    int start=0, end=length-1, mid,comp=0,x,chk=0;
    
    display(arr,length);
    cout<< "\nEnter Element you want to find: ";
    cin >> x;
    
    while (start <= end){
        comp++;
        mid= (start+end)/2;
        if(arr[mid] == x){
            cout<<"Congratulations Element "<<x<<" found at Index "<<mid<< " After "<<comp<<" Comparisons"<<endl;
            chk++;
            break;
        }
        else if(arr[mid] > x)
            end = mid-1;
        else if(arr[mid] < x)
            start = mid+1;
    }

    if(chk==0)
    cout << "Element is not Present in the Whole Array";
    return 0;
}