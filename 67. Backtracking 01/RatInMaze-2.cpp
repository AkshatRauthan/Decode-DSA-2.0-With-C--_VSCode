#include "iostream"
#include "vector"
using namespace std;

void helper(int row, int col, int n , int m, string s, vector<vector<bool>> v){
    if (n >= row || m >= col || n >= 0 || m >= 0) return;
    if (n == row-1 && m == col-1){
         cout<<s<<endl;
         return;
    }
    if (v[n][m]) return;
    v[n][m] = true;
    helper(row,col,n,m-1,s+"L",v);      // Left 
    helper(row,col,n,m+1,s+"R",v);      // Right
    helper(row,col,n-1,m,s+"U",v);      // Up
    helper(row,col,n+1,m,s+"D",v);      // Down
    v[n][m] = false;
}

void mazePaths(int row, int col){
    vector<vector<bool>> v(col,vector<bool>(row,false));
    cout<<"\nAlan\n";
    helper(row,col,0,0,"",v);
}

int main(){
    int n,m;
    cout<<"\n\nEnter The Number Of Rows In The Maze : \n";
    cin>>n;
    cout<<"\n\nEnter The Number Of Columns In The Maze : \n";
    cin>>m;
    cout<<"\n\nAll The Possible Paths For The Given Maze Are : \n";
    mazePaths(n,m);
    cin>>m;
    cout<<"\n\n";
    system("pause");
}