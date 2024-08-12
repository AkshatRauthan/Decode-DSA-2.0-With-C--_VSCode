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
    if (n >= r){
        float ans = (float) fact(n) / ((float) fact(n - r) * (float) fact(r));
        return ans;
    } else cout << "The Value Of n Cannot Be Smaller Than The Value Of r\n";
    return 0;
}
int main() {
    int n;
    cout << "\nEnter The Number Of Rows You Want To Print In The Pascal's Triangle :\n";
    cin >> n;
    cout << "\nThe Required Pascal's Triangle Is As Follows :\n\n\n";
    for (int i = 0; i <= n; i++) {
        cout << "     ";
        // For Printing The Numbers
        for (int j = 0; j <= i; j++) {
            cout << combination(i, j) << "   ";
        }
        cout << endl;
    }
    cout << "\n\n";
    system("pause");
}