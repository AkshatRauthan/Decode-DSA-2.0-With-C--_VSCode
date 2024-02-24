#include "iostream"
using namespace std;

    //  Write a program to rotate the matrix by 90 degrees anti-clockwise.
    //  Input 1:
    //  1 2 3
    //  4 5 6
    //  7 8 9
    //  Output 1:
    //  3 6 9
    //  2 5 8
    //  1 4 7

int main() {
    int n, m;
    cout << "\nEnter The Total Number Of Rows The Matrix :\n";
    cin >> n;
    cout << "\nEnter The Total Number Of Columns The Matrix :\n";
    cin >> m;
    int arr[n][m];
    cout << "\nEnter The " << n * m << " Elements Of The Square Matrix :\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int temp;
            cin >> temp;
            arr[i][j] = temp;
        }
    }
    cout << "\nThe Entered Matrix Is :\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) cout << arr[i][j] << "  ";
        cout << endl;
    }
    int final[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) final[m - i - 1][j] = arr[j][i];
    }
    cout << "\nThe Given Matrix After 90 Degrees Anti-Clockwise Rotation Is :\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) cout << final[i][j] << "  ";
        cout << endl;
    }
    cout<<"\n\n";
    system("pause");
}