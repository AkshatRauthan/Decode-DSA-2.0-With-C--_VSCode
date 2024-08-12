#include "iostream"
using namespace std;
int main() {
    cout << "Enter The Number Whose Sum Of Digits You Want To Print :\n";
    int n, i=0, a;
    cin >> n;
    a = n;
    while (a > 0){
        i += (a % 10);
        a /= 10;
    }
    cout << "The Sum Of Digits Of " << n << " Is " << i;
}