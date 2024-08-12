#include "iostream"
using namespace std;
int main() {
    cout << "Enter The number Whose Number Of Digits You Want To Count :\n";
    int n;
    cin >> n;
    int i, x = n;
    for (i = 0; x > 0; i++) x /= 10;
    if (n == 0) i = 1;
    cout << "\nThe Number Of Digits In " << n << " Is " << i << endl;
}