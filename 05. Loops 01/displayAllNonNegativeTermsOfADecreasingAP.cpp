#include "iostream"
using namespace std;
int main() {
    float i, d;
    cout << "\nEnter The First Term Of The AP :-\n";
    cin >> i;
    cout << "\nEnter The Common Difference Of The AP :-\n";
    cin >> d;
    cout<<"\nThe Requested AP Is :-\n";
    for (; i >= 0; i -= d)
        cout << i << endl;
}