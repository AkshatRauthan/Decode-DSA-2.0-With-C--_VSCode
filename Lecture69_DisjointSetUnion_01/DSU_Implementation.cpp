#include "iostream"
#include "vector"
using namespace std;

class DSU{
private:
    vector<int> par;    // Stores The Parent / Leader Of The Element's Group
    vector<int> rank;   // Stores The Number Of Linkages With ith Index As Parent / Leader.

public:
    DSU(int n){
        par = vector<int>(n);
        rank = vector<int>(n+1, 1);
        for (int i=0; i<=n; i++) par[i] = i;
        return;
    }

    int find(int x){    
    // Almost Constant Time Complexity Due To Path Compression.
    // Time Complexity :    log(*n)
    // log(*n) : Returns The Number Of Times We Need To Perform n = log(n) (base 2) To Make n < 1.
    // log (*n) for n = INT_MAX Is 5.
        if (par[x] == x) return x;
        return par[x] = find(par[x]);
    }

    void Union(int a, int b){   
    // Union By Rank With Path Compression.
    // Time Complexity : log(*n)
        a = find(a), b = find(b);
        if (rank[a] >= rank[b]){
            rank[a]++;
            par[b] = a;
        }
        else{
            rank[b]++;
            par[a] = b;
        }
    }
};

int main(){
    int n, m;
    cout<<"\n\nEnter The Largest Element Present In The Graph : \n";
    cin>>n;
    DSU d(n);
    cout<<"\n\nEnter The Number Of Queries : \n";
    cin>>m;
    while (m--){
        cout<<"\n\nEnter 0 For Union And 1 For Find Operation : \n";
        bool flag;
        cin>>flag;
        if (!flag){
            int t1, t2;
            cout<<"\n\nEnter The Two Elements Whose Union You Want : \n";
            cin>>t1>>t2;
            d.Union(t1, t2);
            cout<<"\nThe Union Of "<<t1<<" And "<<t2<<" Is Successfull. ";
        }
        else {
            cout<<"\n\nEnter The Element Whose Parent You Want : \n";
            int temp = 0;
            cin>>temp;
            cout<<"\nThe Parent Of "<<temp<<" Is : "<<d.find(temp);
        }
        cout<<"\n";
    }
    cout<<"\n\n";
    system("pause");
}