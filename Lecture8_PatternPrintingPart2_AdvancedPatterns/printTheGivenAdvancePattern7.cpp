// The Required Patter Is :-
//     * * * * * * *
//     * * *   * * *
//     * *       * *
//     *           *

#include "iostream"
using namespace std;
int main() {
    int n;
    cout << "\nEnter The Number Of Rows To Be Present In The Pattern :\n";
    cin >> n;
    cout << "\nThe Required Pattern Is :-\n\n";
    cout<<"   ";
    for (int i=1;i<=(2*n-1);i++) cout<<("* ");
    cout<<endl;
    for (int i=1;i<=n;i++){
        cout<<"   ";
        for(int j=1;j<=n-i;j++) cout<<"* ";
        for(int j=1;j<=(2*i-1);j++) cout<<"  ";
        for(int j=1;j<=n-i;j++) cout<<"* ";
        cout<<endl;
    }
    cout<<endl;
    system("pause");
}
