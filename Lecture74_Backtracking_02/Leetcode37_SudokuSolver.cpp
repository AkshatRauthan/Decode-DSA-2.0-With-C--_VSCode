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

int main(){
    vector<vector<char>> v;
    v = {{'5','3','.','.','7','.','.','.','.'},{'6','.','.','1','9','5','.','.','.'},{'.','9','8','.','.','.','.','6','.'},
         {'8','.','.','.','6','.','.','.','3'},{'4','.','.','8','.','3','.','.','1'},{'7','.','.','.','2','.','.','.','6'},
         {'.','6','.','.','.','.','2','8','.'},{'.','.','.','4','1','9','.','.','5'},{'.','.','.','.','8','.','.','7','9'}};
    solveSudoku(v);
    if (solution.empty()) cout<<"\nEmpty\n";
    else{
        for (auto x : solution){
            for (auto ch : x){
                cout<<ch+" ";
            }
            cout<<"\n";
        }
    }
    system("pause");
}