#include "iostream"
#include "vector"
using namespace std;

void sortAsc(vector<int> &v) {
    int n0 = 0, n = v.size();
    for (int i = 0; i < n; i++) if (v[i] == 0) n0++;
    for (int i = 0; i < n; i++) {
        if (n0 != 0) {
            v[i] = 0;
            n0--;
        } else v[i] = 1;
    }
}

void display(vector<int> &v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << "  ";
    }
    cout << endl;
}

int main(){
    vector<int> v;
    v.push_back(1);v.push_back(0);v.push_back(0);v.push_back(1);v.push_back(1);v.push_back(0);
    v.push_back(1);v.push_back(0);v.push_back(1);v.push_back(1);v.push_back(0);v.push_back(1);
    cout << "\nThe Given Array Is :\n";
    display(v);
    cout << "\n\nThe Sorted Array Is :\n" ;
    sortAsc(v);
    display(v);
}