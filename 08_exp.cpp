//Tower of Hanoi

#include<iostream>
using namespace std;

void TOH(int n,char from,char aux,char to){
    if(n==1){
        cout<< "Move Disk 1 from Tower "<< from <<" to "<<to<<endl;
        return ;
    }
    
    TOH(n-1,from,to,aux);
    cout<< "Move Disk "<< n << " from Tower "<< from <<" to "<<to<<endl;
    TOH(n-1,aux,from,to);
}

int main(){
    int n;
    cout << "Enter the number of Disks: ";
    cin >> n;
    TOH(n,'A','B','C');
    return 0;
}