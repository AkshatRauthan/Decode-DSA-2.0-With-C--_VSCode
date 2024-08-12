#include "iostream"
#include "queue"
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

    binaryTree(vector<int>& v){
        root = initializeBinaryTree(v);
    }
    treeNode* initializeBinaryTree(vector<int>& v) {
        queue<treeNode*> q;
        treeNode* node = new treeNode(v[0]);
        q.push(node);
        int i=1, j=2;
        while (!q.empty() && i < v.size()){
            treeNode* temp = q.front();
            q.pop();
            treeNode* l;
            treeNode *r;
            if (v[i] != INT_MIN) l  = new treeNode(v[i]);
            else  l  = nullptr;
            if (v[j] != INT_MIN && j != v.size()) r = new treeNode(v[j]);
            else r = nullptr;
            temp->left  = l;
            temp->right = r;
            if (l) q.push(l);
            if (r) q.push(r);
            i+=2;
            j+=2;
        }
        return node;
    }
    void levelOrderTraversal(bool reverse = false){
        queue<treeNode*> q;
        q.push(root);
        while (!q.empty()){
            treeNode* temp = q.front();
            cout<<temp->val<<"  ";
            q.pop();
            if (temp->left && !reverse) q.push(temp->left);
            if (temp->right) q.push(temp->right);
            if (temp->left && reverse) q.push(temp->left);
        }
    }
};

int main(){
    int n;
    cout<<"\nEnter The Number Of Nodes To Be Present In The Binary Tree\n";
    cin>>n;
    vector<int> v(n);
    cout<<"\nEnter The Elements Of The Binary Tree In Level Order Traversal : \n";
    for (int i=0; i<n; i++) cin>>v[i];
    binaryTree t(v);
    cout<<"\n\nThe Initialized Binary Tree Is As Follows : \n";
    t.levelOrderTraversal();
    cout<<"\n\n";
    system("pause");
}