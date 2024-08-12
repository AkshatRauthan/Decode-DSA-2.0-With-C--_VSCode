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
    int arrt [b][a];
    for (int i = 0; i < a; i++) for (int j = 0; j < b; j++) arrt[j][i]=arr[i][j];
    cout<<"The Transpose Is :\n";
    for (int i = 0; i < b; i++) {
        for (int j = 0; j < a; j++) cout << arrt[i][j]<<"  ";
        cout<<"\n";
    }
}