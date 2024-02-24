#include "vector"
#include "string"
#include "iostream"
using namespace std;

// Question :- You Are Given A Maze Of Dimension m*n. You Have To Cross The Maze By Reaching The Bottom-Right Corner
// Element From The Top-Left Corner Element. You Can Only Go Right Or Down.
// Return The Maximum Possible Ways To Cross The Maze Along With The Possible Paths.

vector<string> paths;

int maxWays(int n, int m,string currPath){
    if (n==1 && m==1){
        paths.push_back(currPath);
        return 1;
    }
    else if (n < 1 || m < 1) return 0;
    return maxWays(n-1, m, currPath+'D') + maxWays(n,m-1, currPath+'R');
}

int main(){
    int n,m;
    cout<<"\nEnter The Number Of Rows In The Maze :\n";
    cin>>n;
    cout<<"\nEnter The Number Of Columns In The Maze :\n";
    cin>>m;
    int count = maxWays(n,m,"");
    cout<<"\nThe Total Number Of Possible Ways To Cross A "<<n<<"X"<<m<<" Grid Are : "<<count;
    cout<<"\n\nThe "<<count<<" Possible Paths Across The Given Grid Are :\n";
    for (string x : paths) cout<<x<<"\n";
    cout<<"\n\n";
    system("pause");
}