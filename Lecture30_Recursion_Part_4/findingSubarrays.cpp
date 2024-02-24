#include "iostream"
#include "vector"
using namespace std;

int n;
vector<vector<int>> subArray;

void initialize(vector<int>& v){
    cout<<"\nEnter The Elements OF The Vector : \n";
    for (int i=0; i<n; i++) cin>>v[i];
}

void printAllSubArrays(){
    for (int i=0; i<subArray.size(); i++){
        cout<<"{";
        for (int j=0; j<subArray[i].size(); j++) cout<<subArray[i][j]<<" ,";
        cout<<"\\0}\n";
    }
}

void findAllSubArrays(vector<int>& v, int idx, vector<int> set, bool flag){
    if (flag) set.push_back(v[idx - 1]);
    if ( idx == n || ( !flag && !set.empty() )){
        subArray.push_back(set);
        return;
    }
    return findAllSubArrays(v, idx+1, set, true), findAllSubArrays( v, idx+1, set, false);
}

int main(){
    cout<<"\nEnter The Number Of Elements Present In The Vector : \n";
    cin>>n;
    vector<int> v( n, 0);
    vector<int> set;
    initialize( v);
    findAllSubArrays( v, 0, set, false);
    cout<<"\nAll The SubArrays Of The Given Vector Are : \n";
    printAllSubArrays();
    cout<<"\n\n";
    system("pause");
}