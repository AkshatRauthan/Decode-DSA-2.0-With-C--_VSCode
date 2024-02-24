// The Desired Output Is: :-  [     ......Floyd's Triangle......     ]
// 1
// 2 3
// 4 5 6
// 7 8 9 10

#include "iostream"
using namespace std;
int main() {
    cout << "\nEnter The Number Of Rows To Be Shown In The Pattern :-\n";
    int n,a=1;
    cin >> n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout<<a++<<" ";
        }
        cout<<endl;
    }
}