#include "iostream"
#include <vector>
#include "algorithm"
using namespace std;
int initialize(vector<int> &a) {
    int n, x;
    cout << "Enter The Number Of Elements :\n";
    cin >> n;
    cout << "\nEnter The Elements Of The Array Separated By Whitespaces \n";
    for (int i = 1; i <= n; i++) {
        cin >> x;
        a.push_back(x);
    }
    return 0;
}
int display(vector<int>& a) {
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << "  ";
    }
    cout << endl;
    return 0;
}
int mergeArrays(vector<int>&v1, vector<int>&v2) {
    int i = 0, j = 0;
    int x =v1.size(), y = v2.size();
    vector<int> v;
    for (int k = 0; k <= x+y-1; k++) {
        if (j == y-1) {
            v.push_back(v2[i]);
            i++;
        } else if (i == x-1) {
            v.push_back(v1[j]);
            j++;
        } else if (v1[i] <= v2[j]) {
            v.push_back(v1[i]);
            i++;
        } else if (v1[i] > v2[j]) {
            v.push_back(v2[j]);
            j++;
        }
    }
    display(v);
    return 0;
}
int main() {
    vector<int> v1, v2;
    cout << "\nFor The First Array ";
    initialize(v1);
    cout << "\n\nFor The Second Array ";
    initialize(v2);
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    cout << "\n\nThe Merged Array Is :\n";
    mergeArrays(v1, v2);
    cout<<"\n\n";
    return 0;
}