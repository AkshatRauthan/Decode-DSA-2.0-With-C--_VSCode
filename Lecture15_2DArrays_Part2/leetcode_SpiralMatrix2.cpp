// Leetcode Question 59 :-
#include "iostream"
#include "vector"
using namespace std;

void display(vector<vector<int>> v1,int n){
    cout<<"\nThe Required Matrix Is As Follows :\n\n";
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cout<<v1[i][j]<<"  ";
        }
        cout<<"\n";
    }
}

vector<vector<int>> generateMatrix(int n){
    int minr=0, maxr=n-1, minc=0, maxc=n-1, count=1;
    vector <vector <int>> v(n,vector<int>(n,0));
    while (count <= n*n){
        // Top Row
        for (int i=minc;i<=maxc && count<=n*n;i++,count++) v[minr][i] = count;
        minr++;

        // Rightmost Column
        for (int i=minr;i<=maxr && count<=n*n;i++,count++) v[i][maxc] = count;
        maxc--;

        // Bottom Row In Reverse
        for (int i=maxc;i>=minc && count<=n*n;i--,count++) v[maxr][i] = count;
        maxr--;

        // Leftmost Column In Reverse
        for (int i=maxr;i>=minr && count<=n*n;i--,count++) v[i][minc] = count;
        minc++;
    }
    return v;
}

int main() {
    cout<<"Enter The Order Of The Square Matrix :\n";
    int n;
    cin>>n;
    display(generateMatrix(n),n);
    cout<<"\n\n";
    system("pause");
}