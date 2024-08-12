// The Desired Output Is: :-
// 1
// 0 1
// 0 1 0
// 1 0 1 0

#include "iostream"
using namespace std;
int main() {
    cout << "\nEnter The Number Of Rows To Be Shown In The Pattern :-\n";
    int n;
    bool a = 1;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << a << " ";
            if (a == 1) a = 0;
            else a = 1;
        }
        cout << endl;
    }
}