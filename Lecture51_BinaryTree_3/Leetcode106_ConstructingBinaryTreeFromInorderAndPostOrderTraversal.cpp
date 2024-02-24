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
treeNode* build(vector<int>& in,int inS, int inE, vector<int>& post, int postS, int postE){
    if (inS > inE && postS > postE) return nullptr;
    int target = post[postE];
    treeNode* node =  new treeNode(target);
    int rootidx = inS;
    while (in[rootidx] != target && rootidx <= inE) rootidx++;
    int noLeft = rootidx - inS;
    node->left = build(in,  inS,       rootidx-1,    post,postS,postS+noLeft-1);
    node->right= build(in,  rootidx+1, inE,          post, postS+noLeft, postE-1);
    return node;
}
treeNode* buildTree(vector<int>& in, vector<int>& post) {
    int n = in.size()-1;
    return build(in, 0, n, post, 0, n);
}
int main(){
    vector<int> post = {9,15,7,20,3};
    cout<<"\nThe Given Post-Order Traversal Of The Binary Tree Is : \n";
    for (int ele : post) cout<<ele<<"  ";
    vector<int> in = {9,3,15,20,7};
    cout<<"\nThe Given In-Order Traversal Of The Binary Tree Is : \n";
    for (int ele : in) cout<<ele<<"  ";
    binaryTree b;
    b.root = buildTree(in,post);
    cout<<"\n\nThe Constructed Binary Tree From The Given Data Is As Follows : \n";
    b.levelOrderTraversal();
    cout<<"\n\n";
    system("pause");
}