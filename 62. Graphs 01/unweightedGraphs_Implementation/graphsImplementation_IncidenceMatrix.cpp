#include "iostream"
#include "vector"
using namespace std;

vector<vector< pair<int,bool> >> graph;
int v; // Number Of Vertices
int idx = 0;

void display(){
    for (int i=0; i<v; i++){
        for (int j=0; j<graph[i].size(); j++) cout<<" {"<<graph[i][j].first<<","<<graph[i][j].second<<"} ";
        cout<<"\n";
    }
}
void add_edge(int src, int dest, bool bi_dir = true){
    if (src == dest) graph[dest][idx] = {2, true};
    else {
        graph[dest][idx] = {1, true};
        if (bi_dir) graph[src][idx] = {1, true};
        else graph[src][idx] = {1, false};
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
    int e; // Number Of Edges
    cin>>e;
    graph.resize(v, vector< pair<int,bool> >(e, {0, false}));
    cout<<"\nEnter The Source And Destination Of The "<<e<<" Edges : \n";
    while (e--){
        int s, d;
        cin>>s>>d;
        add_edge(s, d, bi_dir);
    }
    cout<<"\n\nThe Implemented Graph Is As Follows : \n";
    display();
    cout<<"\n\n";
    system("pause");
}