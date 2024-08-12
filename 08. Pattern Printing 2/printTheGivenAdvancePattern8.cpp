// The Required Patter Is :-
//     1 2 3 4 5 6 7
//     1 2 3   5 6 7
//     1 2       6 7
//     1           7

#include "iostream"
using namespace std;
int main() {
    int n,m=1;
    cout << "\nEnter The Number Of Rows To Be Present In The Pattern :\n";
    cin >> n;
    cout << "\nThe Required Pattern Is :-\n\n";
    cout<<"   ";
    for (int i=1;i<=(2*n-1);i++,m++) cout<<m<<" ";
    cout<<endl;
    for (int i=1;i<=n;i++){
        cout<<"   ";
        m=1;
        for(int j=1;j<=n-i;j++,m++)     cout<<m<<" ";
        for(int j=1;j<=(2*i-1);j++,m++) cout<<"  ";
        for(int j=1;j<=n-i;j++,m++)     cout<<m<<" ";
        cout<<endl;
    }
    cout<<endl;
    system("pause");
}
