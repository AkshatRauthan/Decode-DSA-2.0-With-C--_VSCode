#include "iostream"
# include "vector"
using namespace std;

// Sort the array in descending order using Bubble Sort.

int main(){
    cout<<"\nEnter The Number of Elements Present In The Array :\n";
    int n;
    cin>>n;
    int arr[n];
    cout<<"\nEnter The Elements Of The Array :\n";
    for (int i=0; i<n; i++) cin>>arr[i];
    bool flag = true;
    for (int i=0; i<n && flag; i++) {
        flag = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j + 1] > arr[j]) {
                swap(arr[j + 1], arr[j]);
                flag = true;
            }
        }
    }
    cout<<"\nThe Array Sorted In Descending Order Is As Follows :\n";
    for (int i : arr) cout<<i<<"  ";
    cout<<"\n\n";
    system("pause");
}