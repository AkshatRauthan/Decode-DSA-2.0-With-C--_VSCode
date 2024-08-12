#include "iostream"
#include "vector"
#include "unordered_map"
using namespace std;

int numRabbits(vector<int>& v) {
    unordered_map<int,int> m;
    int ans = 0;
    for (int i=0; i<v.size(); i++){
        int x = v[i];
        if (!m[x+1]){
            ans += x+1;
            if (x == 0) continue;
            m[x+1] = x;
        }
        else {
            m[x+1]--;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"\nEnter The Number Of Elements In The Vector : \n";
    cin>>n;
    vector<int> v(n);
    cout<<"\n\nEnter The Elements Of Teh Vector : \n";
    for (int i=0; i<n; i++) cin>>v[i];
    int ans = numRabbits(v);
    cout<<"\n\nThe Minimum Possible Number Of Rabbits Present In The Forst Is : "<<ans;
    cout<<"\n\n";
    system("pause");
}