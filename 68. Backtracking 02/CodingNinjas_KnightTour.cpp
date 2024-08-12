#include "iostream"
#include "vector"
using namespace std;

vector<vector<int>> board;
vector<int> x = {-2, -1, -2, -1, 2, 1, 2, 1};
vector<int> y = {1, 2, -1, -2, 1, 2, -1, -2};

bool helper(int i, int j, int num, int n, int m){
    if (i < 0 || j < 0 || i >= n || j >= m || board[i][j] != -1) return false;
    if (num == n * m - 1){
        board[i][j] = num;
        return true;
    }
    for (int k=0; k<8; k++){
        board[i][j] = num;
        if(helper(i + x[k], j + y[k], num+1, n, m)) return true;
        board[i][j] = -1;
    }
    return false;
}

vector<vector<int>> knightTour(int n, int m) {
    board.clear();
    board.resize(n, vector<int>(m, -1));
    if (helper(0, 0, 0, n, m)) return board;
    vector<vector<int>> temp(n, vector<int>(m,-1));
    return temp;
}

int main(){
    int n, m;
    cout<<"\n\nEnter The Dimentions Of The Chess Board : \n\n";
    cin>>n>>m;
    knightTour(n, m);
    if (board[0][0] == -1) cout<<"\n\nThere Are No Ways To Cover All The Squares Of The Given Board By Knight Moves Without Overlaping.";
    else{
        cout<<"\n\nThe Solution Of The Given Problem Is : \n\n";
        for (auto row : board){
            for (auto ele : row) cout<<ele<<"  ";
            cout<<"\n";
        }
    }
    cout<<"\n\n";
    system("pause");
}