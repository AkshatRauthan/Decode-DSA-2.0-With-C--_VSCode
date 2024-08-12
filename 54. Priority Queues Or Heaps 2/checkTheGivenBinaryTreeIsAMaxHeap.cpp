#include "iostream"
#include "binaryTree"
#include "vector"
#include "queue"
using namespace std;

bool isMaxHeap(treeNode* node){
    if (!node) return true;
    queue<treeNode*> q;
    q.push(node);
    while (!q.empty()){
        treeNode* temp = q.front();
        q.pop();
        if (!temp->left && !temp->right) continue;
        if (!temp->left && temp->right) return false;
        else if (temp->left && !temp->right){
            if (temp->val > temp->left->val) q.push(temp->left);
            else return false;
        }
        else {
            if (temp->val > temp->left->val && temp->val > temp->right->val){
                q.push(temp->left);
                q.push(temp->right);
            }
            else return false;
        }
    }
    return true;
}

int main(){
    vector<int> v = {20,16,8,12,10,5,1};
    binaryTree t(v);
    cout<<"\n\nThe Binary Tree Is As Follows : \n";
    t.displayTree();
    bool ans = isMaxHeap(t.root);
    if (ans) cout<<"\n\nYes, The Given Binary Tree Is A Max Heap.";
    else cout<<"\n\nNo, The Given Binary Tree Is Not A Max Heap.";
    cout<<"\n\n";
    system("pause");
}