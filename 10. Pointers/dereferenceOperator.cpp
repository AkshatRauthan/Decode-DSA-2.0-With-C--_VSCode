#include <iostream>
using namespace std;
int main() {
    int x = 1098;
    int *p = &x;
    cout << "The Value Of x Is : " << x << endl;
    cout << endl << "The Memory Location Of x Is : " << p << endl;
    // Here * Is Called De-Reference Operator.
    // "*p" Simply Fetches The Value Stored In The Memory Location That Is
    // Stored In The Pointer "p".
    *p = 12;
    // We Can Even Update The Value Of The Variable Using De-Reference Operator.
    cout << "\nValue Of x Is : " << x << "\n\n";
    system("pause");
}