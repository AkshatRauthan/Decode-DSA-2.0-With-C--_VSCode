#include "iostream"
#include "vector"
#include "list"
#include "unordered_set"
using namespace std;

vector<list<int>> graph;
unordered_set<int> visited;
vector<vector<int>> ans;    
int v;
void add_edge(int src, int dest, bool bi_dir = true){
    graph[src].push_back(dest);
    if (bi_dir && src != dest) graph[dest].push_back(src);
}
void dfs(int curr, int end, vector<int> &path){
    if (curr == end){
        path.push_back(curr);
        ans.push_back(path);
        path.pop_back();
        return;
    }
    visited.insert(curr);
    path.push_back(curr);
    for (auto neighbour : graph[curr]){
        if (visited.find(neighbour) == visited.end()){
            dfs(neighbour, end, path);
        }
    }
    path.pop_back();
    visited.erase(curr);
    return;
}
void allPaths(int src, int dest){
    visited.clear();
    vector<int> v = {};
    return dfs(src,  dest, v);
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
    int src, dest;
    cout<<"\n\nEnter The Source And Destination Vertices : \n";
    cin>>src>>dest;
    allPaths(src, dest);
    cout<<"\n\nThe "<<ans.size()<<" Possible Paths Between "<<src<<" And "<<dest<<" Are As Follows : \n";
    for (auto v : ans){
        cout<<v[0];
        for (int i=1; i<v.size(); i++) cout<<" -> "<<v[i];
        cout<<"\n";
    }
    cout<<"\n\n";
    system("pause");
}