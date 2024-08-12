#include "bits/stdc++.h"
#include "DSU_Implementation.cpp"
using namespace std;

// Cycle Detection Using DSU Becomes Very Easy In Case Of Edge-List Implementation Of Graphs.

int main(){
// Implementing Graph Using Edge-List Implementation :-
    int n;
    cout<<"\nEnter The Number Of Nodes Present In The Graph : \n";
    cin>>n;
    int e;
    cout<<"\n\nEnter The Number Of Edges Present In The Graph : \n";
    cin>>e;
    vector<vector<int>> edgeList(e, vector<int>(2, 0));
    cout<<"\n\nEnter The Source And Destination Of The "<<e<<" Edges Present In The Graph : \n";
    for (int i=0; i<e; i++) {
        int a,b;
        cin>>a>>b;
        edgeList[i][0] = a, edgeList[i][1] = b;
    }

// Creating A DSU :-
    DSU d(n);

    // Applying Union On All Nodes Having An Direct Edge And Different Parents.
    // If Both The Nodes Have Same Parents Then The Edge Will Form A Cycle In The Graph.
    bool cycle = false;
    for (auto edge : edgeList){
        if (d.find(edge[0]) !=  d.find(edge[1])) d.Union(edge[0], edge[1]);
        else{
            cout<<"\n\nCycle Is Detected In The Graph On The Edge : "<<edge[0]<<" To "<<edge[1]<<"\n";
            cycle = true;
            break;
        }
    }
    if (!cycle) cout<<"\n\nNo Cycles Detected In The Graph.\n";

    cout<<"\n\n";
    system("pause");
}