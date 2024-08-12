// The Desired Output Is: :-
//       1
//     1 2
//   1 2 3
// 1 2 3 4

#include "iostream"
using namespace std;
int main() {
    cout << "\nEnter The Number Of Rows To Be Shown In The Pattern :-\n";
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= (n - i); j++) cout << "  ";
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}
