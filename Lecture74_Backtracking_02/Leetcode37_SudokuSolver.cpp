#include "iostream"
#include "vector"
using namespace std;

bool canInsert(vector<vector<char>>& v, int ch, int r, int c){
    for (int i=0; i<9; i++) if (v[i][c] - '0' == ch) return false; // Column
    for (int j=0; j<9; j++) if (v[r][j] - '0'== ch) return false; // Row
    int x = (r/3) * 3, y = (c/3) * 3;
    for (int i=x; i<x+3; i++){
        for (int j=y; j<y+3; j++) if (v[i][j] - '0' == ch) return false;
    }
    return true;
}

bool helper(vector<vector<char>>& v, int r, int c){
    if (r == 8 && c == 9) return true;
    if (c == 9) return helper(v, r+1, 0);
    if (v[r][c] != '.') return helper(v, r, c+1);
    for (auto ch = 1; ch <= 9; ch++){
        if (canInsert(v, ch, r, c)){
            v[r][c] = '0' + ch;
            if (helper(v, r, c+1)) return true;
            v[r][c] = '.';
        }
    }
    return false;
}

void solveSudoku(vector<vector<char>>& board) {
    helper(board, 0, 0);
}

int main(){
    vector<vector<char>> v;
    v = {{'5','3','.','.','7','.','.','.','.'},{'6','.','.','1','9','5','.','.','.'},{'.','9','8','.','.','.','.','6','.'},
         {'8','.','.','.','6','.','.','.','3'},{'4','.','.','8','.','3','.','.','1'},{'7','.','.','.','2','.','.','.','6'},
         {'.','6','.','.','.','.','2','8','.'},{'.','.','.','4','1','9','.','.','5'},{'.','.','.','.','8','.','.','7','9'}};
    solveSudoku(v);
    cout<<"\n\n";
    for (auto x : v){
        for (auto ch : x){
            cout<<" "<<ch<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n\n";
    system("pause");
}