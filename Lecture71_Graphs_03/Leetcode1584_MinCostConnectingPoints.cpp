#include "bits/stdc++.h"
#include "DSU_Implementation.cpp"
using namespace std;

static bool compare(vector<int> &v1, vector<int> &v2){
    return v1[2] < v2[2];
}

int findMst(vector<vector<int>> &edgeList){
    DSU d(edgeList.size());
    sort(edgeList.begin(), edgeList.end(), compare);
    int ans = 0;
    for (int i=0; i<edgeList.size(); i++){
        if (d.find(edgeList[i][0]) == d.find(edgeList[i][1])) continue;
        d.Union(edgeList[i][0], edgeList[i][1]);
        ans += edgeList[i][2];
    }
    return ans;
}

int minCostConnectPoints(vector<vector<int>>& v) {
    vector<vector<int>> edgeList = {};
    for (int i=0; i<v.size(); i++){
        for (int j=i+1; j<v.size(); j++){
            edgeList.push_back({i, j, abs(v[i][0]-v[j][0])+abs(v[i][1]-v[j][1])});
        }
    }
    if (edgeList.size() == 1) return edgeList[0][2];
    return findMst(edgeList);
}

int main(){

}