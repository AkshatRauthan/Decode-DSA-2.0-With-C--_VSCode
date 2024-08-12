// The Required Patter Is :-
// 1
// 2 1
// 3 2 1
// 4 3 2 1
#include "iostream"
using namespace std;
int main() {
    int n,j;
    cout << "\nEnter The Number Of Rows To Be Present In The Pattern :\n";
    cin >> n;
    cout<<"\nThe Required Pattern Is :-\n";
    for (int i=1;i<=n;i++){
        j=i;
        for (;j<=i && j>0;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    system("pause");
}