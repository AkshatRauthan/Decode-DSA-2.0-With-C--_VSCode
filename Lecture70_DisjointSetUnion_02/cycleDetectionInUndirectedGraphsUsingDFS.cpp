#include "bits/stdc++.h"
using namespace std;

// Cycle Is Detected When We Re-encounter An Already Visited Node That Is Not The Parent
// Node Of The Current Node.
bool dfs(int src, int parent, vector<list<int>> &graph, unordered_set<int> &visited){
    visited.insert(src);
    for (auto dest : graph[src]){
        if (visited.count(dest) && dest != parent) return true;
        else if (!visited.count(dest))
            if (dfs(dest, src, graph, visited)) return true;
    }
    return false;
}

bool hasCycle(vector<list<int>> &graph){
    unordered_set<int> visited;
    for (int i=0; i<graph.size(); i++){
        if (!visited.count(i)) if (dfs(i,-1,graph,visited)) return true;
    }
    return false;
}

int main(){
// Implementing Graph Using Adjacency-List Implementation :-
    int v, e;
    cout<<"\n\nEnter The Number Of Nodes In The Graph : \n";
    cin>>v;
    cout<<"\n\nEnter The Number Of Edges In The Graph : \n";
    cin>>e;
    vector<list<int>> graph(v, list<int>{});
    while (e--){
        int n1, n2;
        cin>>n1>>n2;
        graph[n1].push_back(n2), graph[n2].push_back(n1);
    }


    bool cycle = hasCycle(graph);
    if (cycle) cout<<"\n\nCycle Detected In The Given Graph.\n";
    else cout<<"\n\nNo Cycle Present In The Given Graph.\n";
    cout<<"\n\n";
    system("pause");
}