#include <iostream>
#include <vector>
using namespace std;

void rotateForward(vector<int> &v1,int k) {
    k = k % (v1.size());
    vector<int> v2;
    for (int i = (v1.size() - k); i < v1.size(); i++) v2.push_back(v1[i]);
    for (int i = 0; i < (v1.size() - k); i++) v2.push_back(v1[i]);
    v1 = v2;
}

// Solution Using A New Pointer.
void initialize(vector<int> &a) {
    int n, x;
    cout << "\nEnter The Number Of Elements In The Target Vector :\n";
    cin >> n;
    cout << "\nEnter The Elements Of The Target Vector Separated By Whitespaces \n";
    for (int i = 1; i <= n; i++) {
        cin >> x;
        a.push_back(x);
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
    cout << "\nEnter The Number Of Steps You Want To Rotate The Vector :\n";
    int k;
    cin >> k;
    rotateForward(v, k);
    cout <<"\nThe Pointer After "<<k<<" Forward Rotations Is :\n";
    display(v);
    cout << endl;
    system("pause");
}