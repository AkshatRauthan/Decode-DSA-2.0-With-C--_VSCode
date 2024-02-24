#include <iostream>
#include <vector>
using namespace std;

void initialize(vector<int> &a) {
    int n, x;
    cout << "\nEnter The Number Of Elements In The Target Vector :\n";
    cin >> n;
    cout << "\nEnter The Elements Of The Target Element Separated By Whitespaces \n";
    for (int i = 1; i <= n; i++) {
        cin >> x;
        a.push_back(x);
    }
}

void reverse(vector<int> &v) {
    int temp;
    for (int i = 0; i < v.size() / 2; i++) {
        temp = v.at(v.size() - i - 1);
        v.at(v.size() - i - 1) = v[i];
        v[i] = temp;
    }
}

void display(vector<int> &a) {
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << "  ";
    }
    cout << endl;
}

int main() {
    vector<int> v;
    initialize(v);
    cout << "\nThe Target Pointer Is : \n";
    display(v);
    reverse(v);
    cout << "\n\nThe Final Pointer Is : \n";
    display(v);
    system("pause");
}