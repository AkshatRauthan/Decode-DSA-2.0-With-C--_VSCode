#include "iostream"
#include "vector"
using namespace std;

vector<vector<char>> solution;
bool canInsert(vector<vector<char>>& v, char ch, int r, int c){
    for (int i=0; i<v.size(); i++) if (v[i][c] == ch) return false; // Column
    for (int j=0; j<v[0].size(); j++) if (v[r][j] == ch) return false; // Row
    int i = r/3 , j = c/3;
    i = 3*i , j = 3*j;
    while (i < (r/3 + 1) * 3){
        while (j < (c/3 + 1) * 3) if (v[i][j++] == ch) return false;
        i++;
    }
    return true;
}

void helper(vector<vector<char>>& v, int i, int j){
    if (j > 8) return helper(v, i+1, 0);
    if (i > 8) return;
    if (i == 8 && j == 8){
        if (v[i][j] == '.') for (char ch = '1'; ch <= '9'; ch++){
                if (canInsert(v, ch, i, j)){
                    v[i][j] = ch;
                    break;
                }   
            }
        solution.assign(v.begin(), v.end());
    }
    if (v[i][j] != '.') return helper(v, i, j+1);
    for (char ch = '1'; ch <= '9'; ch++){
        if (canInsert(v, ch, i, j)) v[i][j] = ch;
        helper(v, i, j);
        v[i][j] = '.';
    }
}

void solveSudoku(vector<vector<char>>& board) {
    helper(board, 0, 0);
}