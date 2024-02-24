#include "iostream"
#include "cmath"
using namespace std;
int main() {
    cout << "Enter The Whose Reverse Order You Want To Print :\n";
    int n;
    cin >> n;
    int i, x = n;
    for (i = 0; x > 0; i++) x /= 10;
    // Number of Digits In Number Is i.
    int m = 0;
    x = n;
    while (x > 0) {
        m += x % 10 * pow(10, i - 1);
        i--;
        x /= 10;
    }
    cout << "\nThe Reverse Number Of " << n << " Is " << m << endl;
}