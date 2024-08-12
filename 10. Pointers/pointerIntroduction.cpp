#include <iostream>
using namespace std;
int main() {
    int a = 8;
    // Creating A Pointer
    // int* Is A Pointer That Has Stored The Address Of An Integer Datatype.
    int *p = &a; // &x = 0x61ff08;
    int *m = &a;
    cout << "Integer : \n" << &a << endl << p << endl << m << endl;
    float b = 4.8;
    float *q = &b;
    cout << "Float : \n" << q << endl;
    system("pause");
}