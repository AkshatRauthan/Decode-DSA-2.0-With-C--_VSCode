#include "iostream"
#include "vector"
using namespace std;

int n;
vector<int> candidates;
vector<vector<int>> Solutions;

void combinationSum(vector<int> v, int idx, int target, int currSum, bool flag) {
    if (idx == n) return;
    if (flag){
        currSum += candidates[idx];
        v.push_back(candidates[idx]);
    }
    if (currSum == target){
        Solutions.push_back(v);
        return;
    }
    else if (currSum > target) return ;
    return combinationSum(v,idx+1,target,currSum,1),combinationSum(v,idx+1,target,currSum,0);
}

void initialize(){
    cout<<"\nEnter The Elements OF The Vector : \n";
    for (int i=0; i<n; i++) {
        int temp;
        cin>>temp;
        candidates.push_back(temp);
    }
}

void printAllCombinations(){
    cout<<"\nAll The Combinations Of Sum Found In The Vector Are :\n";
    for (vector<int> x : Solutions){
        for (int i=0; i<x.size(); i++) cout<<x[i]<<"  ";
        cout<<endl;
    }
}

int main(){
    cout<<"\nEnter The Number Of Elements In The Array : \n";
    cin>>n;
    initialize();
    int target;
    cout<<"\nEnter The Target Sum To Find In The Vector :\n";
    cin>>target;
    vector<int> v;
    combinationSum( v, 0, target, 0, 0);
    printAllCombinations();
    cout<<"\n\n";
    system("pause");
}
