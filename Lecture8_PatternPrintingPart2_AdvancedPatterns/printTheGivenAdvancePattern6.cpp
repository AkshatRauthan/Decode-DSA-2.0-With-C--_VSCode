// The Required Patter Is :-
//       *
//     * * *
//   * * * * *
// * * * * * * *
//   * * * * *
//     * * *
//       *

#include "iostream"
using namespace std;
int main() {
    int n,j;
    cout << "\nEnter The Number Of Rows To Be Present In The Pattern :\n";
    cin >> n;
    cout << "\nThe Required Pattern Is :-\n\n";
    for (int i=1;i<=n;i++){
        cout<<"     ";
        for (j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for (j=1;j<=i-1;j++){
            cout<<"* ";
        }

        j=i;
        for (;j<=i && j>0;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
    for (int i=n-1;i>=1;i--){
        cout<<"     ";
        for (j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for (j=1;j<=i-1;j++){
            cout<<"* ";
        }

        j=i;
        for (;j<=i && j>0;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
    system("pause");
}