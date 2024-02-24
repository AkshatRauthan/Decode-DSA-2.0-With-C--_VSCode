//
// Created by HP on 9/4/2023.
//
#include "iostream"
using namespace std;
int main() {
    int a;
    cout << "Enter The Number Upto Which You Want To Print All The Prime Numbers\n";
    cin >> a;
    cout << endl;
    for (int i = 0; i <= a; i++) {
        if (i % 2 == 0) continue;
        cout << i << endl;
    }
}
