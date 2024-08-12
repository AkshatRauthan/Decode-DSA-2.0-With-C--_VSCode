#include "bits/stdc++.h"
using namespace std;

// Implementation For Directional Graph
vector<list<int>> graph;
int v;

void addEdge(int a, int b){
    graph[a].push_back(b);
}

// BFS Implementation : Kahn's Algorithm
// Complete BFS Traversal Only In Case Of DAG's : Directed Acyclic Graphs.
// BFS Traversal From Nodes Having No Incoming Paths.
void topologicalSortBFS(){
    vector<int> inDegree(v, 0);
    for (int i=0; i<v; i++) for (int ele : graph[i]) inDegree[ele]++;

    queue<int> q;
    unordered_set<int> visited;
    for (int i=0; i<v; i++) if (inDegree[i] == 0){
        q.push(i);
        visited.insert(i);
    }

    cout<<"\n\nThe Order Of Removal Of Nodes Is : \n";
    while (!q.empty()){
        int temp = q.front();
        q.pop();
        cout<<temp<<" ";
        for (auto ele : graph[temp]) if (!visited.count(ele)){
            inDegree[ele]--;
            if (inDegree[ele] == 0) {
                q.push(ele);
                visited.insert(ele);
            }
        }
    }
}

int main(){
    cout<<"\nEnter The Number Of Nodes In The Graph : \n";
    cin>>v;
    graph.resize(v, list<int>());
    cout<<"\n\nEnter The Number Of Edges In The Graph : \n";
    int e;
    cin>>e;
    cout<<"\n\nEnter The Source And Destination Pair For The "<<e<<" Vectices : ";
    while(e--){
        int x, y;
        cin>>x>>y;
        addEdge(x, y);
    }
    topologicalSortBFS();
    cout<<"\n\n";
    system("pause");
}