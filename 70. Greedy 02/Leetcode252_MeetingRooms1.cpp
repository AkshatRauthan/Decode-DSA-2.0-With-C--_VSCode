// Given an array of meetings time intervals where intervals[i] = [start_i, end_i]. Return weather you can atttend all the
// meetings or not.

// Approach => If all the meetings can took place in one room, only then you can attend them.

#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;

bool canAttendMeetings(vector<vector<int>>& v){
    if (!v.size()) return true;
    vector<int> start(v.size(), 0), end(v.size(), 0);
    for (int i=0; i<v.size(); i++){
        start[i] = v[i][0];
        end[i] = v[i][1];
    }
    sort(start.begin(), start.end());
    sort(end.begin(), end.end());

    int ans = 0, num = 0;
    for (int i=0, j=0; i<v.size() && j<v.size(); ){
        if (start[i] == end[j]){
            // One Starts And Other Ends At Same Time.
            // The person can attend both meetings.
            i++, j++;
        }
        else if (start[i] < end[j]){
            // New meeting starts.
            i++, num++;
            ans = max(ans, num);
        }
        else {
            // One meeting ended.
            j++, num--;
        }
    }
    return ans == 1;
}

int main(){
    int n = 0;
    cout<<"\n\nEnter The Total Number Of Meetings : \n";
    cin>>n;
    vector<vector<int>> v(n, vector<int>(2, 0));
    cout<<"\n\nEnter The Starting and Ending Time Of The "<<n<<" Meetings : \n\n";
    for (int i=0; i<n; i++) cin>>v[i][0]>>v[i][1];
    if (canAttendMeetings(v)) cout<<"\n\nYes, you can attend all the meetings.";
    else cout<<"\n\nNo, you can't attend all the meetings.";
    cout<<"\n\n";
    system("pause");
}