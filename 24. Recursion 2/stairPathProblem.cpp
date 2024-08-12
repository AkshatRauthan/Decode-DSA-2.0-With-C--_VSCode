#include "iostream"
#include "algorithm"
#include "vector"
#include "string"
using namespace std;

// Question :- You Have To Climb A Staircase With N Stairs. At One Time You Can Climb A Maximum Of 2 Stairs
// By Dodging One Stair. Return The Maximum Number Of Ways in Which You Can Climb The Staircase.

vector<string> paths;

int maxWays(int n, string currPath){
    if (n == 1) {
        paths.push_back(currPath+'1');
        return 1;
    }
    else if (n == 2){
        paths.push_back(currPath+'2');
        return 1 + maxWays(n-1,currPath+'1');
    }
    return maxWays(n-1, currPath+'1') + maxWays(n-2, currPath+'2');
}

int main(){
    int n;
    cout<<"\nEnter The Number Of Stairs In The Stair Case :\n";
    cin>>n;
    int count =  maxWays(n,"");
    sort(paths.begin(),paths.end());
    cout<<"\nThe Total Number Of Ways To Cross The Given Stair-Case Are : "<<count;
    cout<<"\n\nThe "<<count<<" Possible Paths Across The Given Stair-Case Are :\n";
    for (string x : paths) cout<<x<<"\n";
    cout<<"\n\n";
    system("pause");
}