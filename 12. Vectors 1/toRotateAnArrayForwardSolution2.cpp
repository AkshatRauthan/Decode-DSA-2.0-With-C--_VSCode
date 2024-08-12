#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &a) {
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << "  ";
    }
    cout << endl;
}

void reversePart(vector<int> &v, int start, int end) {
    int temp;
    for (int i = start, a = 0; i <= (end + start) / 2; i++, a++) {
        temp = v[i];
        v[i] = v[end - a];
        v[end - a] = temp;
    }
}

// Solution Without Creating A New Pointer.
void rotateForward(vector<int> &v,int k) {
    int n = v.size();
    k = k % (n);
    reversePart(v, n - k, n - 1);
    reversePart(v, 0, n - 1);
    reversePart(v, k, n - 1);
}

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

int main() {
    vector<int> v;
    initialize(v);
    cout << "\nThe Target Pointer Is : \n";
    display(v);
    cout << "\nEnter The Number Of Steps You Want To Rotate The Vector :\n";
    int k;
    cin >> k;
    if (k%v.size() != 0) rotateForward(v, k);
    cout <<"\n\nThe Pointer After "<<k<<" Forward Rotations Is :\n";
    display(v);
    cout << "\n";
    system("pause");
}