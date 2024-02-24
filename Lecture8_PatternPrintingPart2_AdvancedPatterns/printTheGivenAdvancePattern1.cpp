// The Required Patter Is :-
//       * * * *
//     * * * *
//   * * * *
// * * * *

#include "iostream"
using namespace std;
int main() {
    int n;
    cout<<"\nEnter The Number Of Rows To Be Present In The Pattern :\n";
    cin>>n;
    cout<<"\nThe Required Pattern Is :-\n";
    for (int i=1;i<=n;i++){
        cout<<"    ";
        for (int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for (int j=1;j<=n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<"\n\n";
    system("pause");
}