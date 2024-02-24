#include "iostream"
using namespace std;

int fact(int n) {
    int ans = 1;
    for (int i = 1; i <= n; i++) {
        ans *= i;
    }
    return ans;
}

float combination(int n,int r) {
    if (n > r){
        float ans = (float) fact(n) / ((float) fact(n - r) * (float) fact(r));
        return ans;
    } else cout << "The Value Of n Cannot Be Smaller Than The Value Of r\n";
    return 0;
}

float permutation(int n,int r) {
    if (n > r) {
        float ans = (float) fact(n) / (float) fact(n - r);
        return ans;
    } else cout << "The Value Of n Cannot Be Smaller Than The Value Of r\n";
    return 0;
}

int main() {
    cout << "Enter The Value Of n:\n";
    int n, r;
    cin >> n;
    cout << "\nEnter The Value Of r:\n";
    cin >> r;
    cout << "\nThe Value Of C(n,r) Is : " << combination(n, r) << "\n";
    cout << "\nThe Value Of P(n,r) Is : " << permutation(n, r) << "\n\n";
    system("pause");
}