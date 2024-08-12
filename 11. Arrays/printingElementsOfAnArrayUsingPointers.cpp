#include "iostream"
using namespace std;
void display(int a[],int n) {
    int *ptr = a;
    cout << endl;
    for (int i = 0; i < n; i++) {
        cout << *ptr << "\n";
        ptr += 1;
    }
    ptr = a;
    cout << endl;
}

int main() {
    int n;
    cout << "\nEnter The Number Of Elements Present In The Array :\n";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "\nEnter The Element : \n";
        cin >> arr[i];
    }
    display(arr, n);
    system("pause");
}