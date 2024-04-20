#include "iostream"
#include "vector"
#include "unordered_set"
using namespace std;

bool isValidSudoku(vector<vector<char>>& v) {
    unordered_set<char> s;
    // Checking Rows
    for (int i=0; i<9; i++){
        for (int j=0; j<9; j++){
            if (v[i][j] == '.') continue;
            if (s.find(v[i][j]) != s.end()) return false;
            s.insert(v[i][j]);
        }
        s.clear();
    }

    // Checking Columns
    for (int j=0; j<9; j++){
        for (int i=0; i<9; i++){
            if (v[i][j] == '.') continue;
            if (s.find(v[i][j]) != s.end()) return false;
            s.insert(v[i][j]);
        }
        s.clear();
    }
    
    // Checking The Smaller Squares
    for (int x=0; x<3; x++){
        for (int y=0; y<3; y++){
            for (int i=3*x; i<3*x + 3; i++){
                for (int j=3*y; j<3*y + 3; j++){
                    if (v[i][j] == '.') continue;
                    if (s.find(v[i][j]) != s.end()) return false;
                    s.insert(v[i][j]);
                }
            }
            s.clear();
        }
    }
    return true;
}

int main(){
    vector<vector<char>> v;
    v = {{'5','3','.','.','7','.','.','.','.'},{'6','.','.','1','9','5','.','.','.'},{'.','9','8','.','.','.','.','6','.'},
         {'8','.','.','.','6','.','.','.','3'},{'4','.','.','8','.','3','.','.','1'},{'7','.','.','.','2','.','.','.','6'},
         {'.','6','.','.','.','.','2','8','.'},{'.','.','.','4','1','9','.','.','5'},{'.','.','.','.','8','.','.','7','9'}};
    cout<<"\n\nThe Given Sudoku Is : \n\n";
    for (auto row : v){
        for (auto ch : row){
            cout<<ch<<" ";
        } cout<<"\n";
    }
    bool ans = isValidSudoku(v);
    cout<<"\n\n";
    if (ans) cout<<"Yes, The Given Sudoku Is Valid.\n\n";
    else cout<<"No, The Given Sudoku Is Invalid.\n\n"; 
    system("pause");
}