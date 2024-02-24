#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v;
    cout<<"Enter The Number Of elements Present In The Vector :\n";
    int n;
    cin>>n;
    cout<<endl;
    for (int i=1,j;i<=n;i++) {
        cout << "Enter The Element :\n";
        cin >> j;
        v.push_back(j);
    }
    cout<<"\n  The Elements Present In The Vector Are As Follows\n";
    for (int i = 0; i < v.size(); i++) cout << "  " << v[i] << "\n";
}