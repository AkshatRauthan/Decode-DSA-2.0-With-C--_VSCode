#include "iostream"
using namespace std;
int main() {
    float x, y;
    int z;
    cout << "\nEnter The First Term Of The AP :-\n";
    cin >> x;
    cout << "\nEnter The Common Difference Of The AP :-\n";
    cin >> y;
    cout << "\nEnter The Number Of Terms Of The AP To Print :-\n";
    cin >> z;
    cout << "\nThe Requested Terms Of The AP Are :-\n";
    float l;
    l = x + ((float) z - 1) * y;
    for (float i = x; i <= l; i += y)
        cout << i << endl;
}