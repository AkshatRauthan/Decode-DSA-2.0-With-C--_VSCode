#include "iostream"
#include "vector"
using namespace std;

void sortAsc(vector<int> &v) {
    int i = 0, j = v.size() - 1;
    while (j > i) {
        if (v[i] == 0) i++;
        if (v[j] == 1) j--;
        if (v[i] == 1 && v[j] == 0 && j > i) {
            v[i] = 0;
            v[j] = 1;
            i++;
            j--;
        }
    }
}

void display(vector<int> &v){
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << "  ";
    }
}

int main(){
    vector<int> v;
    v.push_back(1);v.push_back(1);v.push_back(0);v.push_back(1);
    v.push_back(0);v.push_back(1);v.push_back(1);v.push_back(0);
    cout << "\nThe Given Array Is :\n";
    display(v);
    cout << "\n\nThe Sorted Array Is :\n" ;
    sortAsc(v);
    display(v);
}