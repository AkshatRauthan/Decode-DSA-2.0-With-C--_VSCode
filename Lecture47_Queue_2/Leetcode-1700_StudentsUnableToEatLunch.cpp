#include "iostream"
#include "queue"
#include "vector"
using namespace std;

int countStudentsOpt(vector<int>& students, vector<int>& sandwiches){
    int count = 0;
    queue<int> q;
    for (int n : students) q.push(n);
    int i=0;
    while (!q.empty() && count != q.size()){
        if (sandwiches[i] == q.front()){
            count = 0;
            q.pop();
            i++;
        }
        else{
            q.push(q.front());
            q.pop();
            count++;
        }
    }
    return q.size();
}

int countStudents(vector<int>& students, vector<int>& sandwiches){
    int count = 0;
    queue<int> q;
    for (int n : students) q.push(n);
    for (int n : sandwiches){
        for (int i=0; i<q.size(); i++){
            if (n == q.front()){
                q.pop();
                count++;
                break;
            }
            else if (i == q.size()-1) return students.size() - count;
            else {
                q.push(q.front());
                q.pop();
            }
        }
    }
    return students.size() - count;
}

int main(){
    int n;
    cout<<"\nEnter The Number Of Students :\n";
    cin>>n;
    vector<int> stud(n,0);
    vector<int> sand(n,0);
    cout<<"\nEnter The Preferences Of The "<<n<<" Students :\n";
    for (int i=0; i<n; i++) cin>>stud[i];
    cout<<"\nEnter The Shapes Of The Sandwiches Stacked From Top To Bottom :\n ";
    for (int i=0; i<n; i++) cin>>sand[i];
    n = countStudentsOpt(stud, sand);
    cout<<"\nThe Total Number Of Students Left Without Lunch Are "<<n<<"\n\n";
    system("pause");
}