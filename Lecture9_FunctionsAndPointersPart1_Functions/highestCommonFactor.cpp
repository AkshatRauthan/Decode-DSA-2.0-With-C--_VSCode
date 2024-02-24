#include "iostream"
using namespace std;
int hcf(int a,int b) {
    int i = 1;
    for (i = min(a,b); i >= 1; i--) {
        if (a % i == 0 && b % i == 0) break;
        else if (i != 1) continue;
        else {
            i = 1;
            break;
        }
    }
    return i;
}
int main() {
    int a, b;
    cout << "\nEnter The First Number :\n";
    cin >> a;
    cout << "\nEnter The Second Number\n";
    cin >> b;
    cout << "\nTheir Highest Common Factor Is : " << hcf(a, b) << "\n\n";
    system("pause");
}