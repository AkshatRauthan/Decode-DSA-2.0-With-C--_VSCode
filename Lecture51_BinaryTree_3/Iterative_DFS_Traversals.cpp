#include "iostream"
#include "stack"
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
        stack<treeNode*> st;
        st.push(node);
        while (!st.empty()){
            treeNode* temp = st.top();
            st.pop();
            cout<<temp->val<<"  ";
            if (temp->right) st.push(temp->right);
            if (temp->left) st.push(temp->left);
        }
    }
    void displayRevPre(treeNode* node){
        stack<treeNode*> st;
        st.push(node);
        while (!st.empty()){
            treeNode* temp = st.top();
            st.pop();
            cout<<temp->val<<"  ";
            if (temp->left) st.push(temp->left);
            if (temp->right) st.push(temp->right);
        }
    }
    void displayIn(treeNode* node) {
        stack<treeNode*> st;
        while(!st.empty() || node){
            if (node != nullptr){
                st.push(node);
                node = node->left;
            }
            else {
                treeNode* temp = st.top();
                st.pop();
                cout<<temp->val<<"  ";
                node = temp->right;
            }
        }
    }
    void displayRevIn(treeNode* node){
        stack<treeNode*> st;
        while(!st.empty() || node){
            if (node){
                st.push(node);
                node = node->right;
            }
            else {
                treeNode* temp = st.top();
                st.pop();
                cout<<temp->val<<"  ";
                node = temp->left;
            }
        }
    }
    void displayPost(treeNode* node) {
        stack<treeNode*> st;
        stack<int> ans;
        if (node)st.push(node);
        while (!st.empty()){
            treeNode* temp = st.top();
            st.pop();
            ans.push(temp->val);
            if (temp->left) st.push(temp->left);
            if (temp->right) st.push(temp->right);
        }
        for (;!ans.empty(); ans.pop()) cout<<ans.top()<<"  ";
    }
    void displayRevPost(treeNode* node) {
        stack<treeNode *> st;
        stack<int> ans;
        if (node)st.push(node);
        while (!st.empty()) {
            treeNode *temp = st.top();
            st.pop();
            ans.push(temp->val);
            if (temp->right) st.push(temp->right);
            if (temp->left) st.push(temp->left);
        }
        for (; !ans.empty(); ans.pop()) cout << ans.top() << "  ";
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