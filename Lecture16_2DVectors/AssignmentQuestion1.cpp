#include "iostream"
#include "vector"
using namespace std;

//  Given an m x n integer matrix, if an element is 0, set its entire row and column to 0's.
//  You must do it in place.

//  Input :
//  1 1 1
//  1 0 1
//  1 1 1

//  Output :
//  1 0 1
//  0 0 0
//  1 0 1

vector<vector <int>> initialize(){
    int nc,nr,temp;
    cout<<"\nEnter The Number Of Rows You Want To Enter In The Matrix :\n";
    cin>>nr;
    cout<<"\nEnter The Number Of Columns You Want To Enter In The Matrix :\n";
    cin>>nc;
    vector<vector <int>> v(nr,vector<int>(nc,1));
    cout<<"\n Enter The "<<nc*nr<<" Elements Of The Matrix :\n";
    for (int i=0;i<nr;i++) for (int j=0;j<nc;j++) {
        cin>>temp;
        v[i][j]=temp;
    }
    return v;
}

void display(vector<vector <int>>& v){
    for (int i=0;i<v.size();i++) {
        for (int j=0;j<v[0].size();j++) cout<<v[i][j]<<"  ";
        cout<<endl;
    }
}

vector<vector <int>> transform(vector<vector <int>>& v){
    vector <int> r,c;
    // Marking The Indices Of Elements With 0 Value.
    for (int i=0;i<v.size();i++) {
        for (int j=0;j<v[0].size();j++) {
            if (v[i][j] == 0){
                r.push_back(i);
                c.push_back(j);
            }
        }
    }

    // Updating All The Elements Of Required Rows
    for (int i=0;i<r.size();i++) {
        int nr = r[i];
        v[nr]=vector<int>(v[nr].size(),0);
    }

    // Updating All The Elements Of Required Columns
    for (int i=0;i<v.size();i++){
        for (int j=0;j<c.size();j++){
            int nc = c[j];
            v[i][nc] = 0;
        }
    }
    return v;
}

int main(){
    vector<vector <int>> v = initialize();
    cout<<"\nThe Elements Of The Matrix Taken As Input Are :\n";
    display(v);
    transform(v);
    cout<<"\nThe Final Matrix After The Required Changes Is :\n";
    display(v);
}