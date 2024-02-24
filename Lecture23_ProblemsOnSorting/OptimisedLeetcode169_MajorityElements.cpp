#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;

//  Given an array nums of size n, return the majority element.
//  The majority element is the element that appears more than ⌊n / 2⌋ times.
//  You may assume that the majority element always exists in the array.

// Solution :- If An Element is Present More Than n/2 Times In An Array Of n Size Then We Can Definitely
//             Say That It Will Always Be Present In The Middle Element Of The Array.

vector<int> initialize(){
    int n;
    cout<<"\nEnter The Number Of Elements To Be Present In The Vector.\n";
    cin>>n;
    vector<int> v(n);
    cout<<"\nEnter The Elements Of The Vector.\n";
    for (int i=0; i<n; i++) cin>>v[i];
    return v;
}

int majorityElement(vector <int>& v){
    sort(v.begin(),v.end());
    return v[v.size()/2];
}

int main(){
    vector <int> v;
    v = initialize();
    int maj_ele = majorityElement(v);
    cout<<"\nThe Majority Element In The Vector Is : "<<maj_ele<<"\n";
    cout<<"\n\n";
    system("pause");
    return 0;
}