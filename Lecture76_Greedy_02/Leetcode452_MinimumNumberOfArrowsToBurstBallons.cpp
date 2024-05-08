#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;

// Approach 1 : Sorting based on endtime of intervals.
const bool compareEnd(vector<int>& v1, vector<int>& v2){
    return v1[1] < v2[1];
}
int findMinArrowShotsEnd(vector<vector<int>>& v) {
    if (v.empty()) return 0;
    sort(v.begin(), v.end(), compareEnd);
    vector<int> ans = v[0];
    int len = 0;
    for (int i=1; i<v.size(); i++){
        if (v[i][0] <= ans[1]) len++;
        else ans = v[i];
    }
    return v.size() - len;
}

// Approach 2 : Sorting based on startime of intervals.
const bool compareStart(vector<int>& v1, vector<int>& v2){
    return v1[0] < v2[0];
}
int findMinArrowShotsStart(vector<vector<int>>& v) {
    if (v.empty()) return 0;
    sort(v.begin(), v.end(), compareStart);
    vector<int> ans = v[0];
    int len = 0;
    for (int i=1; i<v.size(); i++){
        if (v[i][0] <= ans[1]){
            len++;
            ans[1] = min(ans[1], v[i][1]);
        }
        else ans = v[i];
    }
    return v.size() - len;
}

int main(){
    int n;
    cout<<"\n\nEnter The Number Of Ballons : \n";
    cin>>n;
    vector<vector<int>> v(n, vector<int>(2,0));
    cout<<"\n\nEnter The Starting And Ending Points Of The Ballons : \n";
    for (int i=0; i<n; i++) cin>>v[i][0]>>v[i][1];
    int ans = findMinArrowShotsEnd(v);
    cout<<"\n\nThe Minimum Number Of Arrows Needed To Burst The Ballons Are : "<<ans;
    cout<<"\n\n";
    system("pause");
}