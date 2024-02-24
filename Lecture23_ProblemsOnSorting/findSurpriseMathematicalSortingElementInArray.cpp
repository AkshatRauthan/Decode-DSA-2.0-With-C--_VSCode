#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;

//  Given an array containing n integers, the task is to find the range for an integer k such that after replacing
//  each and every index of the array by |a - k| (where a is the element at ith index) results in a sorted array.
//  If no such integer exists that satisfies the above condition than return -1.

int SurpriseSortingInteger(vector<int> & v){
    int k;
}

int main(){
    int n;
    cout<<"\nEnter The Number Of Elements In The Vector : \n";
    cin>>n;
    vector<int> v(n);
    cout<<"\nEnter The Elements Of The Vector : \n";
    for (int i=0; i<n; i++) cin>>v[i];
    int ele= SurpriseSortingInteger(v);
    if (ele == -1) cout<<"\n\nOh! No Such Integer Is Possible For The Given Vector.";
    else cout<<"\n\nThe Required Integer For Sorting The Given Vector Is : "<<ele;
    cout<<"\n\n\n";
    system("pause");
}