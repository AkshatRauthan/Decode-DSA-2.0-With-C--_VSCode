#include "unordered_set"
#include "iostream"
#include "vector"
#include "list"
#include "queue"
using namespace std;

vector<list<int>> graph;
unordered_set<int> visited;
int v;
void add_edge(int src, int dest, bool bi_dir = true){
    graph[src].push_back(dest);
    if (bi_dir && src != dest) graph[dest].push_back(src);
}
void bfs(int src, int dest, vector<int> &distance){
    queue<int> q;
    visited.clear();
    distance.resize(v, -1);
    distance[src] = 0;
    visited.insert(src);
    q.push(src);
    while (!q.empty()){
        int curr = q.front();
        q.pop();
        for (auto neighbour : graph[curr]){
            if (visited.find(neighbour) == visited.end()) { 
                q.push(neighbour);
                visited.insert(neighbour);
                distance[neighbour] =  distance[curr] + 1;
            }
        }
    }
}
int shortestDistance(int src, int dest){
    vector<int> v;
    bfs(src, dest, v);
    return v[dest];
}
int main(){
    cout<<"\nEnter The Number Of Vertices : \n";
    cin>>v;
    graph.resize(v, list<int> ());
    bool bi_dir = true;
    cout<<"\nEnter 0 For Unidirectional Graph Or 1 For Bidirectional Graph : \n";
    cin>>bi_dir;
    cout<<"\nEnter The Number Of Edges : \n";
    int e;
    cin>>e;
    cout<<"\nEnter The Source And Destination Of The "<<e<<" Edges : \n";
    while (e--){
        int s, d;
        cin>>s>>d;
        add_edge(s, d, bi_dir);
    }
    int src,dest;
    cout<<"\n\nEnter The Source And The Destination Vertices : \n";
    cin>>src>>dest;
    int ans = shortestDistance(src, dest);
    if (ans == -1) cout<<"\n\nOops, No Path Lie Between "<<src<<" And "<<dest;
    else cout<<"\n\nThe Shortest Distance Bewteen "<<src<<" And "<<dest<<" Is : "<<ans;
    cout<<"\n\n";
    system("pause");
}