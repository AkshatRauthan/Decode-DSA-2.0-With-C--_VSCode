#include "iostream"
using namespace std;

void swap(int a,int b){
    int temp = a;
    a = b;
    b = temp;
    return;
}

// Here No Swapping Took Place Because The Variables "a" and "b" Of the Main Function Are Different From
// Those Present In The Swap Function.
// "Pass By Value" Simply Refer To The Case When We Pass Direct Values Into A Function.

int main(){
    int a, b;
    cout << "\nEnter The First Number :\n";
    cin >> a;
    cout << "Enter The Second Number :\n";
    cin >> b;
    swap(a,b);
    cout<<"\nValue Of a : "<<a<<"\nValue Of b : "<<b<<"\n\n";
    system("pause");
}
