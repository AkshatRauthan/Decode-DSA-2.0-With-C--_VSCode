#include "iostream"
#include "binaryTree"
#include "unordered_map"
using namespace std;

void topView(treeNode* root){
    queue<pair<int,treeNode*>> q;
    unordered_map<int,int> m;
    q.push({0,root});
    while (!q.empty()){
        auto temp = q.front();
        auto node = temp.second;
        q.pop();
        if (node->left) q.push({temp.first-1,node->left});
        if (node->right) q.push({temp.first+1,node->right});
        if (m.find(temp.first) == m.end()) m[temp.first] = temp.second->val;
    }
    int mx = INT_MIN, mn = INT_MAX;
    for (auto p : m){
        if (p.first > mx) mx = p.first;
        if (p.first < mn) mn = p.first;
    }
    for (int i = mn; i<= mx; i++) cout<<m[i]<<"  ";
}

int main(){
    vector<int> v = {1,2,3,4,5,INT_MIN,6,7,INT_MIN,8,INT_MIN,9,10,INT_MIN,
                     11,INT_MIN,12,INT_MIN,13,INT_MIN,14,15,16,INT_MIN,17,
                     INT_MIN,INT_MIN,18,INT_MIN,19,INT_MIN,INT_MIN,INT_MIN,
                     20,21,22,23,INT_MIN,24,25,26,27,INT_MIN,INT_MIN,28};
    binaryTree t(v);
    cout<<"\nThe Given Binary Tree Is As Follows : \n";
    t.displayTree();
    cout<<"\n\nThe Top View Of The Binary Tree Is As Follows : \n";
    topView(t.root);
    cout<<"\n\n";
    system("pause");
}