#include "iostream"
#include "vector"
using namespace std;

vector<vector< pair<int,int> >> graph;
int v; // Number Of Vertices
int e; // Number Of Edges
int idx = 0;
void display(){
    cout<<"       ";
    for (int i=0; i<e; i++) cout<<"E"<<i+1<<"     ";
    cout<<"\n";
    for (int i=0; i<v; i++){
        cout<<"V"<<i<<" : ";
        for (int j=0; j<graph[i].size(); j++) cout<<" {"<<graph[i][j].first<<","<<graph[i][j].second<<"} ";
        cout<<"\n";
    }
}
void add_edge(int src, int dest, int weight, bool bi_dir = true){
    if (src == dest) graph[dest][idx] = {weight, 2};
    else {
        graph[dest][idx] = {weight, true};
        if (bi_dir) graph[src][idx] = {weight, true};
        else graph[src][idx] = {weight, false};
    }
    idx++;
}
int main(){
    cout<<"\nEnter The Number Of Vertices : \n";
    cin>>v;
    bool bi_dir = true;
    cout<<"\nEnter 0 For Unidirectional Graph Or 1 For Bidirectional Graph : \n";
    cin>>bi_dir;
    cout<<"\nEnter The Number Of Edges : \n";
    cin>>e;
    graph.resize(v, vector< pair<int,int> >(e, {0, false}));
    cout<<"\nEnter The Source, Destination And Weight Of The "<<e<<" Edges : \n";
    for (int i=0; i<e; i++){
        int s, d, w;
        cin>>s>>d>>w;
        add_edge(s, d, w, bi_dir);
    }
    cout<<"\n\nThe Implemented Graph Is As Follows : \n";
    display();
    cout<<"\n\n";
    system("pause");
}