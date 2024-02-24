//
// Created by HP on 9/4/2023.
//
#include "iostream"
using namespace std;
int main() {
    int a;
    bool b = false;
    cout << "Enter The Number You Want To Check :\n";
    cin >> a;
    if (a > 0) {
        b = true;
        for (int i = 2; i <= (a + 1) / 2; i++) {
            if (a % i == 0) {
                b = false;
                break;
            }
        }
    }
    if (a == 1) cout << endl << a << " Is Neither Prime Nor Composite Number\n";
    else if (b == 1) cout << endl << a << " Is A Prime Number\n";
    else cout << endl << a << " Is A Composite Number\n";
}