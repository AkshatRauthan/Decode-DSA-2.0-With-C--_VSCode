#include "iostream"
#include "vector"
#include "string"
using namespace std;

vector<vector<int>> attacked;
vector<vector<vector<bool>>> ans;

void markAttacked(int r, int c){
    attacked[r][c]++;
    // Same Row => Iterate Over Columns Keeping Row Index Same
    for (int j=0; j<attacked.size(); j++)
        attacked[r][j]++;

    // Same Column => Iterate Over Row Keeping Column Index Same
    for (int i=0; i<attacked.size(); i++)
        attacked[i][c]++;

    // Diaginal 1 => Left To Right
    for (int i=r, j=c; i>=0 && j>=0; i--, j--)   // Top
        attacked[i][j]++;
    for (int i=r, j=c; i<attacked.size() && j<attacked.size(); i++, j++)  // Bottom
        attacked[i][j]++;

    // Diaginal 2 => Right To Left
    for (int i=r, j=c; i>=0 && j<attacked.size(); i--, j++)    // Top
        attacked[i][j]++;
    for (int i=r, j=c; i<attacked.size() && j>=0; i++, j--)   // Bottom
        attacked[i][j]++;
}

void markUnattacked(int r, int c){
    attacked[r][c]--;
    // Same Row => Iterate Over Columns Keeping Row Index Same
    for (int j=0; j<attacked.size(); j++)
        attacked[r][j]--;

    // Same Column => Iterate Over Row Keeping Column Index Same
    for (int i=0; i<attacked.size(); i++)
        attacked[i][c]--;

    // Diaginal 1 => Left To Right
    for (int i=r, j=c; i>=0 && j>=0; i--, j--)   // Top
        attacked[i][j]--;
    for (int i=r, j=c; i<attacked.size() && j<attacked.size(); i++, j++)  // Bottom
        attacked[i][j]--;

    // Diaginal 2 => Right To Left
    for (int i=r, j=c; i>=0 && j<attacked.size(); i--, j++)    // Top
        attacked[i][j]--;
    for (int i=r, j=c; i<attacked.size() && j>=0; i++, j--)   // Bottom
        attacked[i][j]--;
}

void placeQueens(vector<vector<bool>> &board, int n, int idx){
    if (n == 0){
        ans.push_back(board);
        return;
    }
    if (idx >= board.size()) return;
    for (int j = 0; j<board.size(); j++){
        if (attacked[idx][j]) continue;
        board[idx][j] = true;
        markAttacked(idx, j);
        placeQueens(board, n-1, idx+1);
        board[idx][j] = false;
        markUnattacked(idx, j);
    }
}

vector<vector<string>> solveNQueens(int n){
    vector<vector<bool>> board(n, vector<bool> (n, false));
    attacked.resize(n, vector<int>(n, 0));
    placeQueens(board, n, 0);
    vector<vector<string>> finalAns;
    for (auto board : ans){
        vector<string> v;
        for (auto row : board){
            string temp = "";
            for (auto flag : row) temp += flag ? "Q" : ".";
            v.push_back(temp);
        }
        finalAns.push_back(v);
    }
    return finalAns;
}

int main(){
    int n;
    cout<<"\n\nEnter The Number Of Rows In The Chess Board : \n";
    cin>>n;
    vector<vector<string>> finalAns = solveNQueens(n) ;
    cout<<"\n\nThere Are "<<finalAns.size()<<" Ways To Put "<<n<<" Queens On A Chess Board Of Size "<<n<<" X "<<n<<".\n\n";
    int i=1;
    for (auto board : finalAns){
        cout<<"Solution No. "<<i++<<"\n";
        for (auto row : board){
            for (auto ch : row){
                cout<<" "<<ch<<" ";
            }
            cout<<"\n";
        }
        cout<<"\n\n";
    }
    system("pause");
}