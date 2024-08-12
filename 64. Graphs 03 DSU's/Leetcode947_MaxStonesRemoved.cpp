#include "bits/stdc++.h"
using namespace std;

class DSU{
private:
    vector<int> par;
    vector<int> rank;

public:
    int connectedComponents;
    DSU(int n){
        par = vector<int>(n);
        rank = vector<int>(n+1, 1);
        for (int i=0; i<n; i++) par[i] = i;
        connectedComponents = n;
        return;
    }

    int find(int x){
        if (par[x] == x) return x;
        return par[x] = find(par[x]);
    }

    void Union(int a, int b){
        a = find(a), b = find(b);
        if (a == b) return;
        else if (rank[a] >= rank[b]){
            rank[a]++;
            par[b] = a;
        }
        else{
            rank[b]++;
            par[a] = b;
        }
        connectedComponents--;
    }
};


int removeStones(vector<vector<int>>& stones) {
    DSU d(stones.size());
    for (int i=0; i<stones.size(); i++){
        for (int j=i+1; j<stones.size(); j++){
            if (stones[i][0] == stones[j][0] || stones[i][1] == stones[j][1]) d.Union(i, j);
        }
    }
    return stones.size() - d.connectedComponents;
}

int main(){
    int n;
    cout<<"\n\nEnter The Number Of Stones Placed : \n";
    cin>>n;
    vector<vector<int>> stones(n, vector<int>(2));
    cout<<"\n\nEnter The Coordinates Of The "<<n<<" Stones : \n";
    for (int i=0; i<n; i++){
        cin>>stones[i][0]>>stones[i][1];
    }
    int mxStones = removeStones(stones);
    cout<<"\n\nThe Maximum NUmber Of Stones That Can Be Removed Are : "<<mxStones<<"\n\n";
    cout<<"\n\n";
    system("pause");
}