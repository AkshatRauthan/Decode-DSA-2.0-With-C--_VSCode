#include "iostream"
using namespace std;

//  Given a positive integer n, generate n*n matrix filled with elements from 1 to n2 in spiral order.
//  Input 1: n = 3
//  Output 1: [[1,2,3],[8,9,4],[7,6,5]]
//  Input 2: n = 1
//  Output 2: [[1]]

int main(){
    int n;
    cout<<"\nEnter The Order Of The Square Matrix :\n";
    cin>>n;

    int minr=0, maxr=n-1, minc=0, maxc=n-1, count=1;
    int v[n][n];
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

    cout<<"\nThe Required Matrix Is As Follows \n";
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++) cout<<v[i][j]<<"  ";
        cout<<"\n";
    }
    cout<<"\n\n";
    system("pause");
}