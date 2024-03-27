#include "iostream"
#include "vector"
#include "unordered_map"
using namespace std;

vector<unordered_map<int,int>> graph;
int v;

void display(){
    for (int i=0; i<graph.size(); i++){
        cout<<i<<" -> ";
        for (auto p : graph[i]) cout<<" {"<<p.first<<","<<p.second<<"} ,";
        cout<<"\n";
    }
}

void add_edge(int src, int dest,  int weight, bool bi_dir = true){
    graph[src].insert({dest, weight});
    if (bi_dir) graph[dest].insert({src, weight});
}

int main(){
    cout<<"\nEnter The Number Of Vertices : \n";
    cin>>v;
    graph.resize(v, unordered_map<int,int> ());
    bool bi_dir = true;
    cout<<"\nEnter 0 For Unidirectional Graph Or 1 For Bidirectional Graph : \n";
    cin>>bi_dir;
    cout<<"\nEnter The Number Of Edges : \n";
    int e;
    cin>>e;
    cout<<"\nEnter The Source, Destination And Weight Of The "<<e<<" Edges : \n";
    while (e--){
        int s, d, w;
        cin>>s>>d>>w;
        add_edge(s, d, w, bi_dir);
    }
    cout<<"\n\nThe Implemented Graph Is As Follows : \n";
    display();
    cout<<"\n\n";
    system("pause");
}