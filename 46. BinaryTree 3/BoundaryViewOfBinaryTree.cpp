#include "iostream"
#include "vector"
#include "queue"
using namespace std;

// BOUNDARY VIEW : Printing The Values of  All The Boundary Nodes Of The Binary Tree.

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

class binaryTree{
public:
    treeNode *root = nullptr;
    binaryTree() = default;
    binaryTree(vector<int> &v){
        root = initializeBinaryTree(v);
    }
    int maxLevel(treeNode* node){
        if (!node) return 0;
        return 1 + max(maxLevel(node->left), maxLevel(node->right));
    }
    void displayLevel(treeNode* node, int n, int curLevel = 1, bool reverse = false){
        if (!node) return;
        if (curLevel == n){
            cout<<node->val<<"  ";
            return;
        }
        if (!reverse) return displayLevel(node->left,n,++curLevel), displayLevel(node->right,n,curLevel);
        return displayLevel(node->right,n,++curLevel, true), displayLevel(node->left,n,curLevel, true);
    }
    void levelOrderTraversal(bool reverse = false){
        int n = maxLevel(root);
        for (int i=1; i<n+1; i++){
            displayLevel(root, i,1, reverse);
            cout<<"\n";
        }
    }
    treeNode* initializeBinaryTree(vector<int> &v) {
        queue <treeNode*> q;
        treeNode *node = new treeNode(v[0]);
        q.push(node);
        int i=1, j=2;
        while (!q.empty() && i<v.size()) {
            treeNode *temp = q.front();
            q.pop();
            treeNode *l;
            treeNode *r;
            if (v[i] != INT_MIN) l = new treeNode(v[i]);
            else l = nullptr;
            if (v[j] != INT_MIN && j != v.size()) r = new treeNode(v[j]);
            else r = nullptr;
            temp->left = l;
            temp->right = r;
            if (l) q.push(l);
            if (r) q.push(r);
            i += 2;
            j += 2;
        }
        return node;
    }
    void leftBoundary(){
        treeNode* node = root;
        while (node->left || node->right){
            cout<<node->val<<"  ";
            if (node->left) node = node->left;
            else node = node->right;
        }
    }
    void rightBoundary(treeNode* node){
        if (!node || (!node->left && !node->right)) return;
        if (node->right) rightBoundary(node->right);
        else rightBoundary(node->left);
        if (node != root) cout<<node->val<<"  ";
    }
    void leafNodes(treeNode* node){
        if (!node) return;
        if (!node->left && !node->right){
            cout<<node->val<<"  ";
            return;
        } return leafNodes(node->left), leafNodes(node->right);
    }
    void boundaryView(){
        leftBoundary();
        leafNodes(root);
        rightBoundary(root);
    }
};

int main(){
    vector<int> v = {1,2,3,4,5,INT_MIN,6,7,INT_MIN,8,INT_MIN,9,10,INT_MIN,
                     11,INT_MIN,12,INT_MIN,13,INT_MIN,14,15,16,INT_MIN,17,
                     INT_MIN,INT_MIN,18,INT_MIN,19,INT_MIN,INT_MIN,INT_MIN,
                     20,21,22,23,INT_MIN,24,25,26,27,INT_MIN,INT_MIN,28};
    binaryTree b(v);
    cout<<"\nThe Level Ordered View Of The Binary Tree Is : \n";
    b.levelOrderTraversal();
    cout<<"\n\nThe Boundary View Of The Binary Tree Is As Follows : \n";
    b.boundaryView();
    cout<<"\n\n";
    system("pause");
}