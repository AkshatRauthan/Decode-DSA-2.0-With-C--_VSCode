#include "iostream"
using namespace std;

//                                    DFS : Depth First Search

// In DFS Traversals We Traverse All The Nodes By Visiting All The Member Nodes That Are Present
// In A Particular Branch.

// Simply, We Travel Through All The Descendants Of A Node Until We Reach A Null Node.

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
    void displayPre(treeNode* node) {
        if (node == nullptr) return;            // Base Case
        cout<<node->val<<"  ";                 // Work
        displayPre(node->left);         // Call No 1
        displayPre(node->right);       // Call No 2
    }
    void displayRevPre(treeNode* node){
        if (node == nullptr) return;            // Base Case
        cout<<node->val<<"  ";                 // Work
        displayRevPre(node->right);     // Call No 1
        displayRevPre(node->left);     // Call No 2
    }
    void displayIn(treeNode* node) {
        if (node == nullptr) return;            // Base Case
        displayIn(node->left);            // Call No 1
        cout<<node->val<<"  ";                 // Work
        displayIn(node->right);          // Call No 2
    }
    void displayRevIn(treeNode* node){
        if (node == nullptr) return;            // Base Case
        displayRevIn(node->right);        // Call No 1
        cout<<node->val<<"  ";                 // Work
        displayRevIn(node->left);        // Call No 2
    }
    void displayPost(treeNode* node) {
        if (node == nullptr) return;            // Base Case
        displayPost(node->left);          // Call No 1
        displayPost(node->right);        // Call No 2
        cout<<node->val<<"  ";                // Work
    }
    void displayRevPost(treeNode* node){
        if (node == nullptr) return;            // Base Case
        displayRevPost(node->right);      // Call No 1
        displayRevPost(node->left);      // Call No 2
        cout<<node->val<<"  ";                // Work
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

    // Pre-Order
    cout<<"\nThe Binary Tree In Pre-Order Is :\n";
    t.displayPre(a);
    cout<<"\n\nThe Binary Tree In Reverse Pre-Order Is :\n";
    t.displayRevPre(a);

    // In-Order
    cout<<"\n\n";
    cout<<"\nThe Binary Tree In In-Order Is :\n";
    t.displayIn(a);
    cout<<"\n\nThe Binary Tree In Reverse In-Order Is :\n";
    t.displayRevIn(a);

    // Post-Order
    cout<<"\n\n";
    cout<<"\nThe Binary Tree In Post-Order Is :\n";
    t.displayPost(a);
    cout<<"\n\nThe Binary Tree In Reverse Post-Order Is :\n";
    t.displayRevPost(a);

    cout<<"\n\n";
    system("pause");
}