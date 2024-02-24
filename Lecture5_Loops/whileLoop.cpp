#include "iostream"
using namespace std;
int main() {
    float j = 1;
    int n = 1;
    while (j <= 10.000000) {
        j *= 1.01;
        n += 1;
    }
    cout << n;
}