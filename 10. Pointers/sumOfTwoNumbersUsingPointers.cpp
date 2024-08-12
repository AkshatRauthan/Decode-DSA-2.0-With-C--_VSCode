#include <iostream>
using namespace std;
int main() {
    int a, b;
    int *p1 = &a;
    int *p2 = &b;
    cout << "\nEnter The First Number :\n";
    cin >> *p1;
    cout << "Enter The Second Number :\n";
    cin >> *p2;
    cout << "The Sum Of The Two Numbers Is : " << *p1 + *p2<<"\n\n";
    cout << "The Sum Of The Two Numbers Is : " << a + b <<"\n\n";
    system("pause");
}