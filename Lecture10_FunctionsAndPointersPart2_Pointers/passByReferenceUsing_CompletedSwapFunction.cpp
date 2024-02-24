#include "iostream"
using namespace std;

void swap(int* a,int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

int main(){
    int a, b;
    cout << "\nEnter The First Number :\n";
    cin >> a;
    cout << "Enter The Second Number :\n";
    cin >> b;
    swap(&a,&b);
    cout<<"\nValue Of a : "<<a<<"\nValue Of b : "<<b<<"\n\n";
    system("pause");
}
