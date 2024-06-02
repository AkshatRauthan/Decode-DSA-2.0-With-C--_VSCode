#include "bits/stdc++.h"
#define PP pair<int, int>
#define LL long long int
using namespace std;

// Prims's Algorithm : Greedy + BFS + Priority Queue (Min-heap) + Visited Set + Unordered Map(Weight And Parent)
//   i) : Pick A Source Node And Insert It Into Priority Queue.
//  ii) : One By One Remove The Root Element Of The PQ.
// iii) : If The Root Element Is Already Visited , then We Will Just Continue.
//  iv) : Else We Mark Is Visited And Store The Weight Of The Pair In The Ans.
//   v) : Update The Mapping And Go To The Curr Element, And Only Add Those Which Are Non-visited And
//        Have Better Weight Proposition.

vector<list<PP>> graph;

LL findMst(int &src, int n){ // pp = weight, destination
    priority_queue<PP, vector<PP>, greater<>> pq;
    unordered_map<int, int> m;
    unordered_set<int> vis;
    vector<int> par(n);
    LL minWeight = 0;
    for (int i=0; i<n; i++) m[i] = INT_MAX;
    pq.push({0, src});
    m[src] = 0;
    int edgeCount= 0;
    while (edgeCount < n && !pq.empty()){
        PP curr = pq.top();
        if (vis.count(curr.second)){
            pq.pop();
            continue;
        }
        vis.insert(curr.second);
        minWeight += curr.first;
        edgeCount++;
        pq.pop();
        for (auto node : graph[curr.second]){
            if (!vis.count(node.first) && m[node.first] > node.second) {
                pq.push({node.second, node.first});
                par[node.first] = curr.second;
                m[node.first] = node.second;
            }
        }
    }
    return minWeight;
}

int main(){
    int n=0, e=0;
    cout<<"\nEnter The Number Of Nodes In The Graph : \n";
    cin>>n;
    cout<<"\n\nEnter The Number Of Vertices In The Graph : \n";
    cin>>e;
    cout<<"\n\nEnter The Source, Destination And Weight Of The "<<e<<" Edges : \n";
    graph.resize(n, list<PP>{});
    int src, dest, wt;
    for (int i=0; i<e; i++) {
        cin>>src>>dest>>wt;
        graph[src].push_back({dest, wt});
        graph[dest].push_back({src, wt});
    }
    cout<<"\n\nEnter The Source Node From Which You Want To Start Prim's Algorithm : \n";
    cin>>src;
    LL ans = findMst(src, n);
    cout<<"\n\nThe answer Is : "<<ans<<"\n";
    cout<<"\n\n";
    system("pause");
}
