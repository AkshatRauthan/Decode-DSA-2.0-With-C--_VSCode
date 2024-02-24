#include "iostream"
using namespace std;
int main() {
    int x, y;
    float i;
    cout << "\nEnter The Starting Value Of Loop :-\n";
    cin >> x;
    cout << "Enter The Ending Value Of Loop :-\n";
    cin >> y;
    cout<<"\nAll The Even Numbers In The Range "<<x<<" To "<<y<<" Are As Follows :-\n";
    for (i = (float) x; (i <= (float) y / 2); i++) {
        cout << 2 * (int) i << endl;
    }
}