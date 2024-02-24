// The Desired Output Is: :-
// *       *
//   *   *
//     *
//   *   *
// *       *

#include "iostream"
using namespace std;
int main() {
    cout << "\nEnter The Number Of Objets Present In The Pattern\nMust Be An Odd Number\n";
    int n;
    cin >> n;
    cout<<endl;
    int mid=(n/2);
    for (int i=0;i<n;i++){
        if (i==mid){
            for (int j=0;j<n;j++){
                if (j==mid){
                    cout<<" * ";}
                else cout<<" . ";
            }
        }
        else {
            for (int j=0;j<n;j++){
                if (j==(n-i-1) || j == i){
                    cout<<" * ";
                }
                else cout<<" . ";
            }
        }
        cout<<endl;
    }
}