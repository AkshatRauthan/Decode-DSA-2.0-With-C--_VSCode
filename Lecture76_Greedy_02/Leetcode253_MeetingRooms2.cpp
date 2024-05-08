// Given an array of meetings time intervals where intervals[i] = [start_i, end_i]. Return the minimum numbers of 
// conference rooms needed.

// Example : Input => [[0, 30], [5 ,10], [15, 20]]
// Output  :  2

// Example : Input => [[1, 10], [2, 7], [3, 19], [8, 12], [10, 20], [11, 30]]
// Output  :  4

// Approach ==> Merge Two Sorted Arrays.

#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;

int minMeetingRooms(vector<vector<int>>& v){
    if (!v.size()) return 0;
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
            // Number Of rooms do not charge.
            i++, j++;
        }
        else if (start[i] < end[j]){
            // Another meeting starts.
            // One more meeting room is needed.
            i++, num++;
            ans = max(ans, num);
        }
        else {
            // One meeting ended.
            // One meeting room is vacated.
            j++, num--;
        }
    }
    return ans;
}

int main(){
    int n = 0;
    cout<<"\n\nEnter The Total Number Of Meetings : \n";
    cin>>n;
    vector<vector<int>> v(n, vector<int>(2, 0));
    cout<<"\n\nEnter The Starting and Ending Time Of The "<<n<<" Meetings : \n\n";
    for (int i=0; i<n; i++){
        cin>>v[i][0]>>v[i][1];
    }
    int reqRooms = minMeetingRooms(v);
    cout<<"\n\nThe Minimum NUmber Of Required Rooms Are : "<<reqRooms;
    cout<<"\n\n";
    system("pause");
}