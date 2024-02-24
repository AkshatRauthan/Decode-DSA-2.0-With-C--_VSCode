#include "iostream"
using namespace std;
void first_and_last_digit(int a,int* x,int* y) {
    *y = a % 10;
    while (a > 9) a /= 10;
    *x = a;
    return;
}
int main() {
    int a, b, c;
    cout << "\nEnter The Number :\n";
    cin >> a;
    int *x = &b;
    int *y = &c;
    first_and_last_digit(a, x, y);
    cout << "The First Digit Of The Number Is : " << b;
    cout << "\nThe Last Digit Of The Number Is : " << c << "\n\n";
    system("pause");
}