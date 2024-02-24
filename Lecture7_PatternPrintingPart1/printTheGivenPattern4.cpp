// The Desired Output Is: :-
// 1
// 1 3
// 1 3 5
// 1 3 5 7

#include "iostream"
using namespace std;
int main() {
    cout << "Enter The Number Of Objets In The Last Row :\n";
    int n;
    cin >> n;
    for (int j = 1; j <= n; j++) {
        for (int i = 1; i <= j; i++) {
            cout << 2*i-1 << " ";
        } cout << endl;
    }
}