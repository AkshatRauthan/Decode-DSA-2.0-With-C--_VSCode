#include "iostream"
#include "vector"
using namespace std;

vector<string> ans;
vector<vector<bool>> visited;

void helper(vector<vector<int>> &v, int i, int j, string path, int n){
    if (i < 0 || j < 0 || i >= n || j >= n || !v[i][j]) return;
    if (i == n-1 && j == n-1){
        ans.push_back(path);
        return;
    }
    if (visited[i][j]) return;
    visited[i][j] = true;
    if (i > 0) helper(v, i-1, j, path+"U", n);   // Up
    if (i < n-1) helper(v, i+1, j, path+"D", n); // Down
    if (j < n-1) helper(v, i, j+1, path+"R", n); // Right
    if (j > 0) helper(v, i, j-1, path+"L", n);   // Left
    visited[i][j] = false;
}
vector<string> findPath(vector<vector<int>> &m, int n) {
    visited.resize(n, vector<bool> (n, false));
    helper(m, 0, 0, "", n);
    return ans;
}
int main(){
    cout<<"\nEnter The Number Of Rows In The Aquare Matrix : \n";
    int n;
    cin>>n;
    int a;
    cout<<"\n\nEnter The Number Of Obstacles Present In The Maze : \n";
    cin>>a;
    vector<vector<int>> v(n, vector<int>(n, 1));
    for (int i=1; i<=a; i++){
        int r, c;
        cout<<"\n\nEnter The Row And Column Index Of The Obstacle Number "<<i<<"\n";
        cin>>r>>c;
        v[r][c] = 0;
    }
    vector<string> paths = findPath(v, n);
    if (paths.empty()) cout<<"\n\nNo Possible Paths Available.\n\n";
    else {
        cout<<"\n\nAll The Possible Paths Through The Given Maze Are : \n";
        for (auto s : paths) cout<<s<<"\n";
    }
    system("pause");
}