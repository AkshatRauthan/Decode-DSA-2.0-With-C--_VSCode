#include "iostream"
#include "binaryTree"
#include "vector"
using namespace std;

void helper(treeNode* &node, treeNode* &prev, bool &ans){
    if (!node) return ;
    helper(node->left, prev, ans);
    if (prev && prev->val >= node->val){
        ans = false;
        return;
    } prev = node;
    helper(node->right, prev, ans);
}

bool isValidBST(treeNode* node){
    bool ans = true;
    treeNode* prev = new treeNode();
    helper(node, prev, ans);
    return ans;
}

int main(){
    vector<int> v = {2,1,3};
    binaryTree t(v);
    cout<<"\nThe Given Binary Tree Is : \n";
    t.displayTree();
    bool ans = isValidBST(t.root);
    if (ans) cout<<"\n\nYes, The Given Tree Is A Valid Binary search Tree.\n\n";
    else cout<<"\n\nNo, The Given Tree Is Not A Valid Binary search Tree.\n\n";
    system("pause");
}