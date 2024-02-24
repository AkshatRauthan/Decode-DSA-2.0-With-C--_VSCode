#include "iostream"
#include "vector"
using namespace std;

// As The Name Suggests : A Prefix Sum Array Is An Array That Contains The Cumulative Sum Of All The
// Elements Of A Different Array Upto nth Index In Its nth Index.

void prefixSumGenerator(vector<int>& nums){
    for (int i=1; i<nums.size(); i++) nums[i]+=nums[i-1];
}

int main(){
    cout<<"\nEnter The Number Of Elements In The Vector : \n";
    int n;
    cin>>n;
    vector<int> v(n);
    cout<<"\nEnter The Elements Of The Vector : \n";
    for (int i=0; i<n; i++) cin>>v[i];
    prefixSumGenerator(v);
    cout<<"\nThe Prefix Sum Array Of The Given Vector Is : \n";
    for (int x : v) cout<<x<<"  ";
    cout<<"\n\n";
    system("pause");
}