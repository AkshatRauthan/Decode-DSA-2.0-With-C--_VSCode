#include "iostream"
#include "vector"
using namespace std;

vector<vector<pair<int,int>>> graph;
int v;
void display(){
    for (int i=0; i<v; i++){
        cout<<i<<" -> ";
        for (int j=0; j<v; j++){
            if (graph[i][j].first) cout<<" {"<<graph[i][j].first<<","<<graph[i][j].second<<"} ";
        }
        cout<<"\n";
    }
}
void add_edge(int src, int dest, int weight, bool bi_dir = true){
    graph[src][dest].first = dest;
    graph[src][dest].second = weight;
    if (bi_dir){
        graph[dest][src].first = dest;
        graph[dest][src].second = weight;
    }
}
int main(){
    cout<<"\nEnter The Number Of Vertices : \n";
    cin>>v;
    graph.resize(v, vector<pair<int,int>>(v, {0,0}));
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