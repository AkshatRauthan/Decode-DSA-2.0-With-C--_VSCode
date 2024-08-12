#include "iostream"
using namespace std;
int main() {
    int n, f1 = 1, f2 = 1, fn1 = 0, fn2 = 0;
    cout << "Enter The Term Of Fibonacci Series You Want To Print :\n";
    cin >> n;
    int i = 3;
    cout<<"\nThe Required Fibonacci Series Is As Follows :-\n";
    cout<<f1<<endl<<f2<<endl;
    if (n > 2 ) {
        while (i <= n) {
            fn1 = f1 + f2;
            cout<<fn1<<endl;
            f1 = f2;
            f2 = fn1;
            i++;
            if (i < n) {
                fn2 = fn1 + f1;
                cout<<fn2<<endl;
                f1 = fn1;
                f2 = fn2;
                i++;
            }
        }
    } else if (n == 1 || n == 2) fn2 = 1;
    else cout << "\nInvalid Input\n";
    cout << "\nThe " << n << "th Term Of Fibonacci Series Starting With 1 is " << fn2 << endl;
}