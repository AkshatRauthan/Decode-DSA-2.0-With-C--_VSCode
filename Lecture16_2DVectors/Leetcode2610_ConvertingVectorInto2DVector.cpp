#include "iostream"
#include "vector"
using namespace std;

vector<vector<int>> v;
bool present(int& ele, int idx){
    for (int a : v[idx]) if (a == ele) return true;
    return false;
}
void insert(int& element, int idx){
    if (v.empty() || (idx == v.size()-1 && present(element,idx))){
        vector<int> temp;
        temp.push_back(element);
        v.push_back(temp);
        return;
    }
    if (!present(element,idx)){
        v[idx].push_back(element);
        return;
    }
    return insert(element, idx+1);
}

void findMatrix(vector<int>& n) {
    for (int x : n) insert(x,0);
    return;
}

int main(){
    vector<int> q = {3,1,2,1,3};
    findMatrix(q);
    cout<<"\n\nThe Required 2D Vector Is As Follows : \n";
    for (vector<int> temp : v){
        for (int x : temp) cout<<x<<"  ";
        cout<<endl;
    }
    cout<<"\n\n";
    system("pause");
}