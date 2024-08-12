//
// Created by HP on 9/4/2023.
//
#include "iostream"
using namespace std;
int main() {
    int a;
    cout << "Enter The Number You Want To Check :\n";
    cin >> a;
    if (a == 2 || a == 3) cout << endl << a << " Is A Prime Number\n";
    else if (a == 1) cout << endl << a << " Is Neither Prime Nor Composite Number\n";
    else {
        int i = 2;
        L1:
        while ((i <= (a + 1) / 2) && a % i != 0) {
            if (i = a / 2) {
                cout << endl << a << " Is A Prime Number\n";
                goto L1;
            }
            i++;
        }
        if (a % i == 0) cout << endl << a << " Is A Composite Number\n";
    }
}
