#include "iostream"
#include "vector"
using namespace std;

class treeNode{
public:
    int val;
    treeNode* left;
    treeNode* right;
    treeNode() = default;
    treeNode(int val){
        this->val = val;
        this->left = nullptr;
        this->right = nullptr;
    }
};
class binaryTree {
public:
    treeNode *root = nullptr;
    binaryTree() = default;
    int maxLevel(treeNode *node) {
        if (!node) return 0;
        return 1 + max(maxLevel(node->left), maxLevel(node->right));
    }
    void displayLevel(treeNode *node, int n, int curLevel = 1, bool reverse = false) {
        if (!node){
            cout<<"n ";
            return;
        }
        if (curLevel == n) {
            cout << node->val << " ";
            return;
        }
        if (!reverse) return displayLevel(node->left, n, ++curLevel), displayLevel(node->right, n, curLevel);
        return displayLevel(node->right, n, ++curLevel, true), displayLevel(node->left, n, curLevel, true);
    }
    void levelOrderTraversal(bool reverse = false) {
        int n = maxLevel(root);
        for (int i = 1; i < n + 1; i++) {
            displayLevel(root, i, 1, reverse);
            cout << "\n";
        }
    }
};

treeNode* helper(vector<int>& pre, int preS, int preE, vector<int>& post, int postS, int postE){
    if (preS > preE && postS > postE) return nullptr;
    if (preS == preE) return new treeNode(pre[preS]);
    treeNode* node = new treeNode(pre[preS]);
    int ele = pre[preS+1];
    int i = postS;
    while(post[i] != ele) i++;
    int noLeft = i-postS;
    node->left  = helper(pre, preS+1,preS+noLeft+1, post, postS, postS+noLeft);
    node->right = helper(pre, preS+noLeft+2, preE, post, postS+noLeft+1, postE-1);
    return node;
}
treeNode* constructFromPrePost(vector<int>& pre, vector<int>& post) {
    int n = pre.size()-1;
    return helper(pre,0,n,post,0,n);
}

int main(){
    vector<int> pre = {1,2,4,5,3,6,7};
    cout<<"\nThe Given Pre-Order Traversal Of The Binary Tree Is : \n";
    for (int ele : pre) cout<<ele<<"  ";
    vector<int> post = {4,5,2,6,7,3,1};
    cout<<"\nThe Given Post-Order Traversal Of The Binary Tree Is : \n";
    for (int ele : post) cout<<ele<<"  ";
    binaryTree b;
    b.root = constructFromPrePost(pre,post);
    cout<<"\n\nThe Constructed Binary Tree From The Given Data Is As Follows : \n";
    b.levelOrderTraversal();
    cout<<"\n\n";
    system("pause");
}