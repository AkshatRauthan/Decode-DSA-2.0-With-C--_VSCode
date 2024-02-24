#include <iostream>
#include <vector>
using namespace std;

void initialize(vector<int> &a){
    for (int i=1;i<=10;i++) {
        a.push_back(i);
    }
}

void reverse(vector<int> &v1,vector<int> &v2){
    int n = v1.size();
    for (int i=0;i<n;i++){
        v2.push_back(v1.at(n-1-i));
    }
}

void display(vector<int> &a){
    for (int i=0;i<a.size();i++) {
        cout<<a[i]<<"  ";
    }
    cout<<endl;
}

int main() {
    vector<int> v1;
    initialize(v1);
    cout<<"\nThe Target Array Is : \n";
    display(v1);
    vector<int> v2;
    reverse(v1,v2);
    cout<<"\n\nThe Final Array Is : \n";
    display(v2);
}