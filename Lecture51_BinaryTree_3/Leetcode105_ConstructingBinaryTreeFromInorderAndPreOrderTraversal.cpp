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

treeNode* build(vector<int>& pre,int preS, int preE, vector<int>& in, int inS, int inE){
    if (preS > preE && inS > inE) return nullptr;
    int target = pre[preS];
    treeNode* node =  new treeNode(target);
    int rootidx = inS;
    while (in[rootidx] != target && rootidx <= inE) rootidx++;
    int noLeft = rootidx - inS;
    node->left = build(pre,preS+1,       preS+noLeft,in,  inS+1-1,  rootidx-1);
    node->right= build(pre,preS+noLeft+1,preE+1-1,   in , rootidx+1,inE+1-1);
    return node;
}
treeNode* buildTree(vector<int>& pre, vector<int>& in) {
    int n = pre.size()-1;
    return build(pre, 0, n, in, 0, n);
}
int main(){
    vector<int> pre = {3,9,20,15,7};
    cout<<"\nThe Given Pre-Order Traversal Of The Binary Tree Is : \n";
    for (int ele : pre) cout<<ele<<"  ";
    vector<int> in = {9,3,15,20,7};
    cout<<"\nThe Given In-Order Traversal Of The Binary Tree Is : \n";
    for (int ele : in) cout<<ele<<"  ";
    binaryTree b;
    b.root = buildTree(pre,in);
    cout<<"\n\nThe Constructed Binary Tree From The Given Data Is As Follows : \n";
    b.levelOrderTraversal();
    cout<<"\n\n";
    system("pause");
}