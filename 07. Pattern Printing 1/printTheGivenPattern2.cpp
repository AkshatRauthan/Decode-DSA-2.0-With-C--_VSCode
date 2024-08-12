// The Desired Output Is: :-
// * * * *
// * * *
// * *
// *

#include "iostream"
using namespace std;
int main() {
    cout << "Enter The Number Of Stars In The Last Row :\n";
    int n;
    cin >> n;
    for (int j = n; j >= 1; j--) {
        for (int i = j; i >= 1; i--) {
            cout << "* ";
        }
        cout << endl;
    }
}