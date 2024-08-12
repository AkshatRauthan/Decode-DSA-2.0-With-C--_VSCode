#include "iostream"
#include "vector"
#include "list"
#include "unordered_set"
using namespace std;

vector<list<int>> graph;
unordered_set<int> visited;
int v;
void add_edge(int src, int dest, bool bi_dir = true){
    graph[src].push_back(dest);
    if (bi_dir && src != dest) graph[dest].push_back(src);
}
bool dfs(int curr, int end){
    if (curr == end) return true;
    visited.insert(curr);
    for (auto neighbour : graph[curr]){
        if (visited.find(neighbour) == visited.end()){
            bool result = dfs(neighbour, end);
            if (result) return true;
        }
    }
    return false;
}
bool anyPath(int src, int dest){
    return dfs(src,  dest);
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
    cout<<"\n\nEnter The Source And Destination Vectices : \n";
    cin>>src>>dest;
    if ( anyPath(src, dest) ) cout<<"\n\nYes, A Path Between "<<src<<" and "<<dest<<" Exists.";
    else cout<<"\n\nNo, There Is No Path Between "<<src<<" and "<<dest;
    cout<<"\n\n";
    system("pause");
}