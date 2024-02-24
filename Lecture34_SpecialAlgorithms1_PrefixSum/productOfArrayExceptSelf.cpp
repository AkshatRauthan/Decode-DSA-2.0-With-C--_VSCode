#include <algorithm>
#include "iostream"
#include "vector"
using namespace std;

// Given an integer array nums, return an array answer such that answer[i] is equal to the product
// of all the elements of nums except nums[i].
// You must write an algorithm that runs in O(n) time and without using the division operation.

vector<int> productExceptSelf(vector<int> &v){
    vector<int> product(v.size(),1);
    vector<int> product2(v.size(),1);
    for (int i=2; i<v.size(); i++) product[i] = product[i-1] * v[i-1];
    reverse(v.begin(),v.end());
    for (int i=1; i<v.size(); i++) product2[i] = product2[i-1] * v[i-1];
    for (int i=0; i<v.size()-1; i++) product[i] *= product2[v.size()-1-i];
    return product;
}

int main() {
    cout << "\nEnter The Number Of Elements Present In The Vector : \n";
    int n;
    cin >> n;
    vector<int> v(n);
    cout << "\nEnter The Elements Of The Vector : \n";
    for (int i = 0; i < n; i++) cin >> v[i];
    v = productExceptSelf(v);
    cout << "\n\n";
    for (int x: v) cout << x << "  ";
    cout<<"\n\n";
    system("pause");
}