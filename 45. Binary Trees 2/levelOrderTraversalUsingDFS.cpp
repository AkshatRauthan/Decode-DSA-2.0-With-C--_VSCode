#include "iostream"
using namespace std;

class treeNode{
public:
    int val;
    treeNode* left;
    treeNode* right;
    treeNode(int val){
        this->val = val;
        this->left = nullptr;
        this->right = nullptr;
    }
};

class binaryTree {
public:
    treeNode *root;

    binaryTree() {
        root = nullptr;
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

    void levelOrderTraversal(treeNode* node, bool reverse = false){
        int n = maxLevel(node);
        for (int i=1; i<n+1; i++){
            displayLevel(node, i,1, reverse);
            cout<<"\n";
        }
    }
};

int main() {
    binaryTree t;
    treeNode *a = new treeNode(1);
    treeNode *b = new treeNode(2);
    treeNode *c = new treeNode(3);
    treeNode *d = new treeNode(4);
    treeNode *e = new treeNode(5);
    treeNode *f = new treeNode(6);
    treeNode *g = new treeNode(7);
    t.root = a;
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    cout<<"\nThe Binary Tree In Level Order Transversal Is As Follows : \n";
    t.levelOrderTraversal(a);
    cout<<"\nThe Binary Tree In Reverse Level Order Transversal Is As Follows : \n";
    t.levelOrderTraversal(a, true);
    cout<<"\n\n";
    system("pause");
}