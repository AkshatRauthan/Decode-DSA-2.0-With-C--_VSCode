#include "iostream"
#include "vector"
#include "list"
#include "queue"
#include "unordered_set"
using namespace std;

vector<list<int>> graph;
unordered_set<int> visited;
int v;
void add_edge(int src, int dest, bool bi_dir = true){
    graph[src].push_back(dest);
    if (bi_dir && src != dest) graph[dest].push_back(src);
}
void bfs(int src, vector<int> &distance){
    queue<int> q;
    visited.clear();
    distance.resize(v, 0);
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
void shortestDistance(int src, vector<int> &v){
    bfs(src, v);
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
    int src;
    cout<<"\n\nEnter The Source Vertex From Which You Which You Want To Calculate The Shortest Distance For To Vectices : \n";
    cin>>src;
    vector<int> distance;
    shortestDistance(src, distance);
    cout<<"\n\nThe Shortest Distance Of All The Vertices From "<<src<<" Is As Follows : \n";
    for (int i=0; i<v; i++) cout<<i<<" : "<<distance[i]<<"\n";
    cout<<"\n\n";
    system("pause");
}