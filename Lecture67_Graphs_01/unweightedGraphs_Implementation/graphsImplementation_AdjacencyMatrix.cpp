#include "iostream"
#include "vector"
using namespace std;

vector<vector<int>> graph;
int v;

void display(){
    for (int i=0; i<v; i++){
        cout<<i<<" -> ";
        for (int j=0; j<v; j++){
            if (graph[i][j]) cout<<j<<" , ";
        }
        cout<<"\n";
    }
}

void add_edge(int src, int dest, bool bi_dir = true){
    graph[src][dest] = 1;
    if (bi_dir) graph[dest][src] = 1;
}

int main(){
    cout<<"\nEnter The Number Of Vertices : \n";
    cin>>v;
    graph.resize(v, vector<int>(v, 0));
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
    cout<<"\n\n";
    system("pause");
}