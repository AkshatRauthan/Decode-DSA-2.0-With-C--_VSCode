#include "iostream"
#include "algorithm"
#include "vector"
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& v) {
    vector<vector<int>> ans;
    sort(v.begin(), v.end());
    for (int i=0; i<v.size(); i++){
        int idx = ans.size()-1;
        if (ans.empty()) ans.push_back(v[i]);
        else if (ans[idx][0] <= v[i][0] && ans[idx][1] >= v[i][0]) ans[idx][1] = max(ans[idx][1], v[i][1]);
        else ans.push_back(v[i]);
    }
    return ans;
}

int main(){
    int n;
    cout<<"\n\nEnter The Number Of Intervals To Merge : \n";
    cin>>n;
    vector<vector<int>> v(n, vector<int>(2));
    cout<<"\n\nEnter The "<<n<<" Intervals To Merge : \n";
    for (int i=0; i<n; i++) cin>>v[i][0]>>v[i][1];
    vector<vector<int>> ans = merge(v);
    cout<<"\n\nThe Intervals After Meger Are As Follows : \n";
    for (auto temp : ans) cout<<"["<<temp[0]<<", "<<temp[1]<<"], ";
    cout<<"\n\n";
    system("pause");
}