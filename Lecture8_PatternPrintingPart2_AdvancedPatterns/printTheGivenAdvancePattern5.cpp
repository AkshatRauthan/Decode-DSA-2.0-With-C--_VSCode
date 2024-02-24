// The Required Patter Is :-
//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1
#include "iostream"
using namespace std;
int main() {
    int n, j;
    cout << "\nEnter The Number Of Rows To Be Present In The Pattern :\n";
    cin >> n;
    cout << "\nThe Required Pattern Is :-\n\n";
    for (int i=1;i<=n;i++){
        cout<<"     ";
        for (j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for (j=1;j<=i-1;j++){
            cout<<j<<" ";
        }

        j=i;
        for (;j<=i && j>0;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    system("pause");
}
