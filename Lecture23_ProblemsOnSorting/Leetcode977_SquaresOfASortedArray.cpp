#include "iostream"
#include "vector"
using namespace std;

// Given an integer array nums sorted in non-decreasing order,
// return an array of the squares of each number sorted in non-decreasing order.

// Input: nums = [-4,-1,0,3,10]
// Output: [0,1,9,16,100]
// Explanation: After squaring, the array becomes [16,1,0,9,100].
//              After sorting, it becomes [0,1,9,16,10]


vector<int> initialize(){
    int n;
    cout<<"\nEnter The Number Of Elements To Be Present In The Vector.\n";
    cin>>n;
    vector<int> v(n);
    cout<<"\nEnter The Elements Of The Vector.\n";
    for (int i=0; i<n; i++) cin>>v[i];
    return v;
}

vector<int> sortedSquares(vector<int>& nums) {
    int n = nums.size();
    vector<int> v(n);
    if (n==1) {
        v[0] = nums[0]*nums[0];
        return v;
    }
    if (n==2) {
        if (nums[0]*(-1) >= nums[1]){
            v[0] = nums[1]*nums[1];
            v[1] = nums[0]*nums[0];
        }
        else {
            v[1] = nums[1]*nums[1];
            v[0] = nums[0]*nums[0];
        }
        return v;
    }
    int index=0;
    while (nums[index]<0 && index<n) index++;
    v[0] = nums[index] * nums[index];
    int i=index-1, j=index+1, count=1;
    while (i>=0 || j<n){
        if (nums[i]*(-1) >= nums[j]){
            v[count] = nums[j]*nums[j];
            j++;
        }
        else if (nums[i]*(-1) < nums[j]){
            v[count] = nums[i]*nums[i];
            i--;
        }
        count++;
        if (count>=n) break;
    }
    return v;
}

int main(){
    vector <int> v = initialize();
    v=sortedSquares(v);
    cout<<"\nThe Vector After Required Sorting Is As Follows :\n";
    for (int i : v) cout<<i<<"  ";
    cout<<"\n\n";
    system("pause");
    return 0;
}