#include "iostream"
#include "binaryTree"
#include "vector"
#include "queue"
using namespace std;

    bool isMinHeap(treeNode* node){
    if (!node) return true;
    queue<treeNode*> q;
    q.push(node);
    while (!q.empty()){
        treeNode* temp = q.front();
        q.pop();
        if (!temp->left && !temp->right) continue;
        if (!temp->left && temp->right) return false;
        else if (temp->left && !temp->right){
            if (temp->val < temp->left->val) q.push(temp->left);
            else return false;
        }
        else {
            if (temp->val < temp->left->val && temp->val < temp->right->val){
                q.push(temp->left);
                q.push(temp->right);
            }
            else return false;
        }
    }
    return true;
}

int main(){
    vector<int> v = {1,5,12,8,10,16,20};
    binaryTree t(v);
    cout<<"\n\nThe Binary Tree Is As Follows : \n";
    t.displayTree();
    bool ans = isMinHeap(t.root);
    if (ans) cout<<"\n\nYes, The Given Binary Tree Is A Min Heap.";
    else cout<<"\n\nNo, The Given Binary Tree Is Not A Min Heap.";
    cout<<"\n\n";
    system("pause");
}