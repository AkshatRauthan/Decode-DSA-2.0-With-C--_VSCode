#include "iostream"
using namespace std;
int main() {
    int a, b;
    cout << "\nEnter Number Of Rows :\n";
    cin >> a;
    cout << "Enter Number Of Columns :\n";
    cin >> b;
    int arr[a][b];
    for (int i = 0; i < a; i++) for (int j = 0; j < b; j++) cin >> arr[i][j];
    cout << "\n";
    int max = 0;
    for (int i = 0; i < a; i++) for (int j = 0; j < b; j++) if (arr[i][j] > max) max = arr[i][j];
    cout << "The Largest Element Is " << max;
}