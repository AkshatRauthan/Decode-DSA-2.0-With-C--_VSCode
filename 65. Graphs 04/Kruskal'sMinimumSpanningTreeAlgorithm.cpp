#include "bits/stdc++.h"
#include "DSU_Implementation.cpp"
using namespace std;

// Minimum Spanning Tree : It is a Sub-Tree Of A Weighted Connected Graph Having All The Nodes
//                         Without Any Cycle In A Way That The Sum of The Weights Of All The Paths
//                         Is Minimum.

// Properties Of MST :
//   i) : No Cycles Are Present.
//  ii) : All The Nodes Of The Graph Are Present.
// iii) : There Is Only One Path Between Any Two Nodes.
//  iv) : Sum Of Weights Of Edges Is Least Amongst All Such Sub-Graphs.

// Kruskal's Algorithm : Greedy + Sorting + DSU
//   i) : For Creating The MST always pick the edge with the smallest weight.
//  ii) : Determine if choosing it will create a cycle or not. If so ignore it.

// Implementation : Edge List For Graph And DSU For Cycle Detection.

bool compare(vector<int> &v1, vector<int> &v2){
    return v1[2] < v2[2];
}

vector<vector<int>> findMst(vector<vector<int>> &edgeList, int n, long long &minWeight){
    DSU d(n);
    vector<vector<int>> mst = {};
    sort(edgeList.begin(), edgeList.end(), compare);

    int edgeCount = 0;
    for (int i=0; i<edgeList.size() && edgeCount < n-1; i++){
        if (d.find(edgeList[i][0]) == d.find(edgeList[i][1])) continue;
        mst.push_back(edgeList[i]);
        d.Union(edgeList[i][0], edgeList[i][1]);
        minWeight += (long long)edgeList[i][2];
        edgeCount++;
    }
    return mst;
}

int main(){
    // Edge List Implementation Of Weighted Graph
    int n=0, e=0;
    cout<<"\nEnter The Number Of Nodes In The Graph : \n";
    cin>>n;
    cout<<"\n\nEnter The Number Of Vertices In The Graph : \n";
    cin>>e;
    vector<vector<int>> edgeList(e, vector<int>(3, 0));
    cout<<"\n\nEnter The Source, Destination And Weight Of The "<<e<<" Edges : \n";
    for (int i=0; i<e; i++) cin>>edgeList[i][0]>>edgeList[i][1]>>edgeList[i][2];

    long long minWeight = 0;
    vector<vector<int>> mst = findMst(edgeList, n, minWeight);
    cout<<"\n\nThe Sum Of Weight Of The Edges Of The Minimum Spanning Tree Is : "<<minWeight<<"\n\n";
    cout<<"\nThe Edges Present In The Minimum Spanning Tree Are a Follows : \n";
    for (auto v : mst){
        cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<"\n";
    }
    cout<<"\n\n";
    system("pause");
}
