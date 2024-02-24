#include <iostream>
#include <vector>
using namespace std;

void change( vector<int> a) {
    a[a.size() - 1] = 100;
    for (int i = 0; i < a.size(); i++) cout << "  " << a[i] << " ";
}

void changeOriginal( vector<int> &a) {
    a[a.size() - 1] = 100;
    for (int i = 0; i < a.size(); i++) cout << "  " << a[i] << " ";
}

// From The Output, We Can Clearly Say That Vectors Are Passed By Value.

int main() {
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    for (int i = 0; i < v.size(); i++) cout << "  " << v[i] << " ";
    cout << "\n";
    change(v);
    cout << "\n";
    for (int i = 0; i < v.size(); i++) cout << "  " << v[i] << " ";


    // For Pass By Reference In Vectors

    cout << "\n\nFor Pass By Reference :\n";
    for (int i = 0; i < v.size(); i++) cout << "  " << v[i] << " ";
    cout << "\n";
    changeOriginal(v);
    cout << "\n";
    for (int i = 0; i < v.size(); i++) cout << "  " << v[i] << " ";
}