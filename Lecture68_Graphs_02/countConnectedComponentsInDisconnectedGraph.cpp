#include "iostream"
#include "vector"
#include "list"
#include "unordered_set"
#include "queue"
using namespace std;
 
vector<list<int>> graph;
int v;

void display(){
    for (int i=0; i<graph.size(); i++){
        cout<<i<<" -> ";
        for (auto x : graph[i]) cout<<x<<" , ";
        cout<<"\n";
    }
}

void add_edge(int src, int dest, bool bi_dir = true){
    graph[src].push_back(dest);
    if (bi_dir && src != dest) graph[dest].push_back(src);
}

void bfs(int src, unordered_set<int>& s){
    queue<int> q;
    unordered_set<int> visited;
    visited.clear();
    visited.insert(src);
    q.push(src);
    while (!q.empty()){
        int curr = q.front();
        s.insert(curr);
        q.pop();
        for (auto neighbour : graph[curr]){
            if (visited.find(neighbour) == visited.end()) { 
                q.push(neighbour);
                visited.insert(neighbour);
            }
        }
    }
}

int countComponents(vector<list<int>> &graph, int v){
    unordered_set<int> s;
    int ans = 0;
    for (int i=0; i<v; i++) if (s.find(i) == s.end()){
        bfs(i, s);
        ans++;
    }
    return ans;
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
    cout<<"\n\nThe Implemented Graph Is As Follows : \n";
    display();
    int n = countComponents(graph, v);
    cout<<"\nThe Number Of Connected Components In The Given Graph Is : "<<n;
    cout<<"\n\n";
    system("pause");
}