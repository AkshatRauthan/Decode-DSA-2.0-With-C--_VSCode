#include "bits/stdc++.h"
using namespace std;

// Given Grid Of MXN Having Character 'L', 'R', 'D', 'U' Denoting The Direction You Can Move From The
// Particular Cell. Starting From [0,0] Tell Us Weather You Can Reach The Last Cell[N-1, M-1].
// Constrains : S.C. = O(1), Grid => Non-Modifiable.


bool approach1(vector<vector<char>>& v, int steps){
    int i=0, j=0, n=v.size(), m=v[0].size();
    while(steps < m*n){
        if (i<0 || j<0 || i>=n || j>=m) return false;
        if (i==n-1 && j==m-1) return true;
        if (v[i][j] == 'L') j--;
        else if (v[i][j] == 'R') j++;
	else if (v[i][j] == 'U') i--;
	else i++;
	steps++;
    }
    return false;
}

bool approach2(vector<vector<char>>& v){	//Wrong Answer
    int i=0, j=0, fi=0, fj=0;
    int n=v.size(), m=v[0].size();
    while ((i != fi  &&  j != fj) || (!i && !j && !fi && !fj)){

        if ((i==n-1 && j==m-1) || (fi==n-1 && fj==m-1)) return true;
        if (v[i][j] == 'L') j--;
        else if (v[i][j] == 'R') j++;
        else if (v[i][j] == 'U') i--;
        else i++;

        if ((i==n-1 && j==m-1) || (fi==n-1 && fj==m-1)) return true;
        if (i<0 || j<0 || i>=n || j>=m) return false;

        if (v[i][j] == 'L') fj = j-1;
        else if (v[i][j] == 'R') fj = j+1;
        else if (v[i][j] == 'U') fi = i-1;
        else fi = i+1;

        if ((i==n-1 && j==m-1) || (fi==n-1 && fj==m-1)) return true;
        if (fi<0 || fj<0 || fi>=n || fj>=m) return false;
    }
    return false;
}

int main(){
    int n, m;
    cout<<"\n\nEnter The Dimensions Of The Grid : \n";
    cin>>n>>m;
    cout<<"\n\nEnter The Values Of The Grid : \n";
    vector<vector<char>> v(n, vector<char>(m));
    for (int i=0; i<n; i++) for (int j=0; j<m; j++){
	cin>>v[i][j];
    }
    bool ans1 = approach1(v, 0), ans2 = approach2(v);
    cout<<"\n\nThe Answer From Approach 1 Is : "<<(ans2?"True":"False")<<"\n";
    cout<<"\n\n";
    system("pause");
}