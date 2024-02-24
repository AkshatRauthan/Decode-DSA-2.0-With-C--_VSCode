// The Desired Output Is: :-
// 1
// 1 2
// 1 2 3
// 1 2 3 4

#include "iostream"
using namespace std;
int main() {
    cout << "Enter The Number Of Objects In The Last Row :\n";
    int n;
    cin >> n;
    for (int j = 1; j <= n; j++) {
        for (int i = 1; i <= j; i++) {
            cout << i << " ";
        } cout << endl;
    }
}