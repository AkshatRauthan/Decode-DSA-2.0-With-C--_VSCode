#include "iostream"
#include "vector"
#include "unordered_set"
using namespace std;

vector<unordered_set<int>> graph;
int v;

void display(){
    for (int i=0; i<graph.size(); i++){
        cout<<i<<" -> ";
        for (auto x : graph[i]) cout<<x<<" , ";
        cout<<"\n";
    }
}

void add_edge(int src, int dest, bool bi_dir = true){
    graph[src].insert(dest);
    if (bi_dir) graph[dest].insert(src);
}

int main(){
    cout<<"\nEnter The Number Of Vertices : \n";
    cin>>v;
    graph.resize(v, unordered_set<int> ());
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