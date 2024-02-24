#include <iostream>
#include <vector>
using namespace std;

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

void reversePart(vector<int> &v, int start, int end) {
    int temp;
    for (int i = start,a=0; i <= (end+start)/2; i++,a++) {
        temp = v[i];
        v[i]=v[end-a];
        v[end-a]=temp;
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
    int start,end;
    cout<<"\nEnter The Range Of Indices In Which You Want To Reverse Indices Seperated By Whitespace :\n";
    cin>>start>>end;
    reversePart(v,start,end);
    cout << "\nThe Final Pointer Is : \n";
    display(v);
    cout<<"\n";
    system("pause");
}