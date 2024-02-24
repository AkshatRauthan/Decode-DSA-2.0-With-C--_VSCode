#include "iostream"
using namespace std;
int main() {
    int x = 5;
    int *ptr = &x;
    int **p = &ptr;
    // Double Pointer Stores The Address Of A Pointer.
    cout << "Value Of x : " << x << endl << "Value Of ptr : " << ptr << endl << "Value Of p : " << p << "\n\n";
    cout << "Value Of x : " << x << endl << "Value Of *ptr : " << *ptr << endl << "Value Of *p : " << *p;
    cout << "\nValue Of **p : " << **p << "\n\n";
    system("pause");
}