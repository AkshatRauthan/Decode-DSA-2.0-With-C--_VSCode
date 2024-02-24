#include <iostream>
#include <vector>
#include "algorithm"
using namespace std;
int main() {
    int n,value;
    cout<<"\nEnter The Size Of The Target Array :\n";
    cin>>n;
    int v[n];
    vector<int> ans;
    cout << "\nEnter The Elements Of The Array :\n";
    for (int i=0;i<n;i++) {
        cin >> value;
        v[i]=value;
    }
    int x;
    cout << "\nEnter The Value Of Sum Corresponding To The Doublet Pairs :\n";
    cin >> x;
    sort(v, v+n);
    if (x > 2 * v[n-1]) cout << "Oops! No Such Doublets Are Possible\n";
    else {
        for (int i = 0; i <= n - 1; i++) {
            for (int j = 0; j <= n - 1; j++) {
                if ((v[i] + v[j]) == x) {
                    ans.push_back(v[i]);
                    ans.push_back(v[j]);
                }
            }
        }
        cout << "\nAll The Possible Doublets Are As Follows:\n";
        for (int i = 0; i < ans.size()/2; i++) {
            cout << "(" << ans[i] << "," << ans[++i] << ")  ";
        }
    }
    cout << "\n\n";
    system("pause");
}