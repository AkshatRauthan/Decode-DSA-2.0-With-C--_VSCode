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

    void displayLevel(treeNode* node, int n, int curLevel = 1){
        if (!node) return;
        if (curLevel == n){
            cout<<node->val<<"  ";
            return;
        }
        return displayLevel(node->left,n,++curLevel), displayLevel(node->right,n,curLevel);
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
    int n = 3;
    cout<<"\nThe "<<n<<"th Level Of The Binary Tree Is : \n";
    t.displayLevel(a,n);
}