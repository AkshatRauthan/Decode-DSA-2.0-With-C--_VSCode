// The Required Patter Is :-
//       *
//     * * *
//   * * * * *
// * * * * * * *

#include "iostream"
using namespace std;
int main() {
    int n;
    cout << "\nEnter The Number Of Rows To Be Present In The Pattern :\n";
    cout << "Must be An Odd Number :\n";
    cin >> n;
    int s = 1, a = (2*n-1)/2;
    for (int i = 1; i <= n; i++) {
        cout<<"    ";
        for (int j = 1; j <= a; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= s; j++) {
            cout << "* ";
        } s += 2;
        for (int j = 1; j <= a; j++) {
            cout << "  ";
        }
        cout<<endl;
        a--;
    }
    cout<<"\n\n";
    system("pause");
}