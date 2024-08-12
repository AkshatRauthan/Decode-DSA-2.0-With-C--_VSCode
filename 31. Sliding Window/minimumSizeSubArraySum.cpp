#include "iostream"
#include "vector"
using namespace std;

// Given an array of positive integers nums and a positive integer target,
// return the minimal length of a subarray whose sum is greater than or equal to target.
// If there is no such subarray, return 0 instead.

void initialize(vector<int> &v){
    for (int i=0; i<v.size(); i++) cin>>v[i];
}

int idx;

int minSubArrayLen(int target, vector<int>& v){
    int j, sum, minLen = v.size() + 1;
    bool flag;
    for (int i=0; i<v.size(); i++){
        j = i, sum = 0, flag = false;
        while (j < v.size()) {
            sum += v[j];
            j++;
            if (sum >= target){
                flag = true;
                break;
            }
        }
        if (j-i+1 < minLen && flag) {
            minLen = j-i+1;
            idx = i;
        }
    }
    if (minLen <= v.size()) return minLen;
    return 0;
}

int minSubArrayLenOptimised(int target, vector<int>& v){
    int j = 0, sum = 0, minLen = v.size() + 1;
    for (int i=0; i<v.size(); i++){
        if (!i) while (sum < target) sum += v[i++];

    }
    return minLen;
}

int main(){
    int n, target;
    cout<<"\nEnter The Number Of Elements Present In The Given Array :\n";
    cin>>n;
    vector<int> v(n,0);
    cout<<"\nEnter The Elements Of The Vector :\n";
    initialize(v);
    cout<<"\nEnter The Value Of The Target Sum :\n";
    cin>>target;
    int len = minSubArrayLen(target ,v);
    if (len) {
        cout<<"\nThe Smallest SubArray With Required Sum Is : ";
        for (int i=0; i<len; i++) cout<<v[idx+i]<< "  ";
        cout<<"\n\nThe Length Of Smallest SubArray With Required Sum Is : "<<len;
    }
    else cout<<"\nOops! No Such Sub-array Exists For Current Value Of Target";
    cout<<"\n\n";
    system("pause");
}