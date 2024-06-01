#include "iostream"
#include "vector"
using namespace std;

class DSU{
private:
    vector<int> par;   
    vector<int> rank;  
    vector<int> mx;
    vector<int> mn;
    vector<int> size;

public:
    DSU(int n){
        par = vector<int>(n+1);
        mn = vector<int>(n+1);
        mx = vector<int>(n+1);
        rank = vector<int>(n+1, 1);
        size = vector<int>(n+1, 1);
        for (int i=0; i<=n; i++) mx[i] = mn[i] = par[i] = i;
        return;
    }    

    int find(int x){    
        if (par[x] == x) return x;
        return par[x] = find(par[x]);
    }

    void Union(int a, int b){   
        a = find(a), b = find(b);
        if (a == b) return; // If Both Are Already In Same Group Return.
        if (rank[a] > rank[b]){
            rank[a]++;
            par[b] = a;
            mx[a] = max(mx[a], mx[b]);
            mn[a] = min(mn[a], mn[b]);
            size[a] += size[b];
        }
        else{
            rank[b]++;
            par[a] = b;
            mx[b] = max(mx[b], mx[a]);
            mn[b] = min(mn[b], mn[a]);
            size[b] += size[a];
        }
    }

    void Get(int a){
        cout<<mn[a]<<" "<<mx[a]<<" "<<size[a]<<"\n";
    }
};

void file_i_o(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main(){
    file_i_o();  
    int n, m;
    cin>>n>>m;
    DSU d(n);
    string s = "";
    while (m--){
        cin>>s;
        if (s == "union"){
            int a=0, b=0;
            d.Union(a, b);
        }
        else {
            int a=0;
            d.Get(a);
        }
    }
    return 0;       
}