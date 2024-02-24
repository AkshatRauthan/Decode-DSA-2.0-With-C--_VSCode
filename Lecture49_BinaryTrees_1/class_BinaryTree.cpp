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

class binaryTree{
public:
    treeNode *root;
    binaryTree(){
        root = nullptr;
    }
    void display(treeNode* node){
        if (node == nullptr) return;
        cout<<node->val<<"  ";
        return display(node->left), display(node->right);
    }
};

int sum(treeNode* node){
    if (node == nullptr) return 0;
    return node->val + sum(node->left) + sum(node->right);
}

int size(treeNode* node){
    if (node == nullptr) return 0;
    return 1 + size(node->left) + size(node->right);
}

int maxInTree(treeNode* node){
    if (node == nullptr) return INT_MIN;
    return max(node->val,max(maxInTree(node->left), maxInTree(node->right)));
}

int noOfLevels(treeNode* node){
    if (node == nullptr) return 0;
    return 1 + max(noOfLevels(node->left), noOfLevels(node->right));
}

int main(){
    binaryTree t;
    treeNode *a = new treeNode(1);
    treeNode *b = new treeNode(2);
    treeNode *c = new treeNode(3);
    treeNode *d = new treeNode(4);
    treeNode *e = new treeNode(5);
    treeNode *f = new treeNode(6);
    treeNode *g = new treeNode(7);
    treeNode *h = new treeNode(8);
    treeNode *i = new treeNode(9);
    t.root   = a;
    a->left  = b;
    a->right = c;
    b->left  = d;
    b->right = e;
    c->left  = f;
    c->right = g;
    g->left  = h;
    h->left  = i;
    cout<<"\nThe Binary Tree Is As Follows : \n";
    t.display(t.root);
    cout<<"\n\nThe Sum Of The Binary Tree Is : "<<sum(t.root);
    cout<<"\n\nThe Size Of The Binary Tree Is : "<<size(t.root);
    cout<<"\n\nThe Value Of Maximum Element Of the Binary Tree Is : "<<maxInTree(t.root);
    cout<<"\n\nThe Number Of Levels In The Binary Tree Is : "<<noOfLevels(t.root);
}