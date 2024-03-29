#include "iostream"
#include "vector"

using namespace std;

void helper(vector<vector<int>>& v, int sr, int sc, int color, int initialColor){
    if (sr >= v.size() || sc >= v[0].size() || sc < 0 || sr < 0 ) return;
    if (v[sr][sc] != initialColor) return ;
    v[sr][sc] = color;
    helper(v, sr-1, sc, color, initialColor);
    helper(v, sr+1, sc, color, initialColor);
    helper(v, sr, sc-1, color, initialColor);
    helper(v, sr, sc+1, color, initialColor);
}

vector<vector<int>> floodFill(vector<vector<int>>& v, int sr, int sc, int color){
    if (color == v[sr][sc]) return v;
    helper(v, sr, sc, color, v[sr][sc]);
    return v;
}

int main(){
    int n, m;
    cout<<"\n\nEnter The Dimensions Of The 2D Vector : \n";
    cin>>n>>m;
    vector<vector<int>> v(n, vector<int> (m ,0));
    cout<<"\n\nEnter The "<<n*m<<" Elements Of The 2D Vector : \n";
    for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin>>v[i][j];
    int color = 0;
    cout<<"\n\nEnter The Code Of The Colour To Be Filled : \n";
    cin>>color;
    int sr, sc;
    cout<<"\n\nEnter The Indexes Of The Source : \n";
    cin>>sr>>sc;
    floodFill(v, sr, sc, color);
    cout<<"\n\nThe Final 2D Vector After The Changes Is : \n";
    for (auto x : v){
        for (auto y : x) cout<<y<<"  ";
        cout<<"\n";
    }
    cout<<"\n\n";
    system("pause");
}