#include "iostream"
using namespace std;

//  Write a program to print the matrix in wave form.
//  Input :
//  1 2 3
//  4 5 6
//  7 8 9
//  Output : 7 4 1 2 5 8 9 6 3

int main(){
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
    cout << "\nThe Entered Matrix In Wave Form From The Bottom-Left Element Is :\n";
    int count = 0,j=0;
    while (count != m*n){
        for (int i=n;i!=0;i--) {
            cout<<arr[i-1][j]<<"  ";
            count++;
        }
        j++;
        for (int i=0;i<n && count!=m*n;i++) {
            cout<<arr[i][j]<<"  ";
            count++;
        }
        j++;
    }
    cout<<"\n\n";
    system("pause");
}