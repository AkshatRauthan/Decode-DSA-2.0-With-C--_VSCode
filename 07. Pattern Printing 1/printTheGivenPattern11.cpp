// The Desired Output Is: :-
//       *
//     * *
//   * * *
// * * * *

#include "iostream"
using namespace std;
int main() {
    cout << "\nEnter The Number Of Rows To Be Shown In The Pattern :-\n";
    int n,a=1;
    cin >> n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=(n-i);j++) cout<<"  ";
        for (int j=1;j<=i;j++) cout<<"* ";
        cout<<endl;
    }
}