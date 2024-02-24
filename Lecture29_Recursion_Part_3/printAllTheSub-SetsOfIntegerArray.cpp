#include "iostream"
#include "vector"
using namespace std;

int n;
vector<vector<int>> subSets;

void initialize(vector<int>& v){
    cout<<"\nEnter The Elements OF The Vector : \n";
    for (int i=0; i<n; i++) cin>>v[i];
}

void printAllSubsets(){
    for (int i=0; i<subSets.size(); i++){
        cout<<"{";
        for (int j=0; j<subSets[i].size(); j++) cout<<subSets[i][j]<<" ,";
        cout<<"\\0}\n";
    }
}

void findAllSubsets(vector<int>& v, int idx, vector<int> set, bool flag){
    if (flag) set.push_back(v[idx - 1]);
    if (idx == n){
        subSets.push_back(set);
        return;
    }
    return findAllSubsets(v, idx+1, set, true), findAllSubsets( v, idx+1, set, false);
}

int main(){
    cout<<"\nEnter The Number Of Elements Present In The Vector : \n";
    cin>>n;
    vector<int> v( n, 0);
    vector<int> set;
    initialize( v);
    findAllSubsets( v, 0, set, false);
    cout<<"\nAll The Subsets Of The Given Vector Are : \n";
    printAllSubsets();
    cout<<"\n\n";
    system("pause");
}