#include "iostream"
using namespace std;
int main() {
    cout << (-4 > 0 ? 'P' : 'A') << endl;
    cout << (-4 > 0 ? 6 : '8') << endl;
    cout << (-4 > 0 ? '6' : 8) << endl;
    cout << (-4 > 0 ? 6 : 8) << endl;
    cout << endl;
    cout << (-4 < 0 ? 'P' : 'A') << endl;
    cout << (-4 < 0 ? 6 : '8') << endl;
    cout << (-4 < 0 ? '6' : 8.567567) << endl;
    cout << (-4 < 0 ? 6 : 8) << endl;
}