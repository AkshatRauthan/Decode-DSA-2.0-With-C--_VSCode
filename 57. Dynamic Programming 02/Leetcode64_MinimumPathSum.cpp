#include "iostream"
#include "vector"
using namespace std;

int minPathSum(vector<vector<int>>& v){
    if (v.size() == 1 && v[0].size() == 1) return v[0][0];
    if (v.size() == 1){
        int sum = 0;
        for (int i=0; i<v[0].size(); i++) sum += v[0][i];
        return sum;
    }
    if (v[0].size() == 1){
        int sum = 0;
        for (int i=0; i<v.size(); i++) sum += v[i][0];
        return sum;
    }
    for (int i=0; i<v.size(); i++){
        for (int j=0; j<v[0].size(); j++){
            if (i == 0 && j == 0)  continue;
            else if (i == 0) v[0][j] += v[0][j-1];
            else if (j == 0) v[i][j] += v[i-1][0];
            else v[i][j] += min(v[i-1][j],v[i][j-1]);
        }
    }
    return v[v.size()-1][v[0].size()-1];
}

int main(){
    int n,m;
    cout<<"\n\nEnter The Number Of Rows In The Maze : \n";
    cin>>m;
    cout<<"\n\nEnter The Number Of Columns In The Maze : \n";
    cin>>n;
    vector<vector<int>> v(m,vector<int>(n,1));
    cout<<"\n\nEnter The "<<m*n<<" Elements Of The 2D Vector.\n";
    for (int i=0; i<m; i++) for (int j=0; j<n; j++) cin>>v[i][j];
    cout<<"\n\nThe Minimum Cost Required To Cross The Matrix Is : "<<minPathSum(v);
    cout<<"\n\n";
    system("pause");
}