#include "iostream"
#include "vector"
using namespace std;

// Star Graph : A star graph is a graph where there is one center node and exactly n - 1 
// edges that connect the center node with every other node.

// A Star Graph Must have at Least 

int findCenter(vector<vector<int>>& v){
    if (v[0][0] == v[1][0] || v[0][0] == v[1][1]) return v[0][0];
    return v[0][1];
}

int main(){
    int n;
    cout<<"\nEnter The Number Of Edges Present In The Star Graph : \n";
    cin>>n;
    vector<vector<int>> v(n, vector<int>(2,0));
    cout<<"\n\nEnter The Source And Destination Of The "<<n<<" Edges Of The Graph : \n";
    for (int i=0; i<n; i++) cin>>v[i][0]>>v[i][1];
    cout<<"\n\nThe Center Of The Star Graph Is : "<<findCenter(v);
    cout<<"\n\n";
    system("pause");
}