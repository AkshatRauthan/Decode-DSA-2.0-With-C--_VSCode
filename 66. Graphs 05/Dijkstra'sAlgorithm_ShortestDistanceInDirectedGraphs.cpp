#include "bits/stdc++.h"
#define PP pair<int, int>
#define LL long long int
using namespace std;

vector<list<PP>> graph;

unordered_map<int,int> findShortestPath(int &src, int n){ // pp = weight, destination
    priority_queue<PP, vector<PP>, greater<>> pq;
    unordered_map<int, int> m;
    unordered_set<int> vis;
    vector<int> via(n);
    for (int i=0; i<n; i++) m[i] = INT_MAX;
    pq.push({0, src});
    m[src] = 0;
    while (!pq.empty()){
        PP curr = pq.top();
        if (vis.count(curr.second)){
            pq.pop();
            continue;
        }
        vis.insert(curr.second);
        pq.pop();
        for (auto node : graph[curr.second]){
            if (!vis.count(node.first) && m[node.first] > node.second + m[curr.second]) {
                pq.push({node.second + m[curr.second], node.first});
                via[node.first] = curr.second;
                m[node.first] = node.second + m[curr.second];
            }
        }
    }
    return m;
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
    cout<<"\n\nEnter The Source And Destinations Between Which You Want The Shortest Path : \n";
    cin>>src>>dest;
    unordered_map<int, int> m = findShortestPath(src, n);
    wt = m[dest];
    cout<<"\n\nThe Weight Of The Shortest Path Is : "<<wt<<"\n";
    cout<<"\n\n";
    system("pause");
}
