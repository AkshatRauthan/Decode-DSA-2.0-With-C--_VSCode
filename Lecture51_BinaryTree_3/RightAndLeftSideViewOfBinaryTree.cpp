#include "iostream"
#include "vector"
#include "queue"
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

    binaryTree(vector<int> &v) {
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
};
int maxLevel(treeNode* node){
    if (!node) return 0;
    return 1 + max(maxLevel(node->left), maxLevel(node->right));
}
void preOrder(treeNode* node,vector<int>& v, int curLevel, bool reverse = false){
    if (!node) return;
    v[curLevel] = node->val;
    if (reverse) preOrder(node->right,v,++curLevel,true), preOrder(node->left,v,curLevel,true);
    else preOrder(node->left,v,++curLevel), preOrder(node->right,v,curLevel);
}
vector<int> rightSideView(treeNode* node){
    int n = maxLevel(node);
    vector<int> v(n);
    preOrder(node,v,0);
    return v;
}
vector<int> leftSideView(treeNode* node){
    int n = maxLevel(node);
    vector<int> v(n);
    preOrder(node,v,0,true);
    return v;
}

int main(){
    vector<int> v = {1,2,3,4,5,INT_MIN,6,7,INT_MIN,8,INT_MIN,9,10,INT_MIN,
                     11,INT_MIN,12,INT_MIN,13,INT_MIN,14,15,16,INT_MIN,17,
                     INT_MIN,INT_MIN,18,INT_MIN,19,INT_MIN,INT_MIN,INT_MIN,
                     20,21,22,23,INT_MIN,24,25,26,27,INT_MIN,INT_MIN,28};
    binaryTree b(v);
    vector<int> left  = leftSideView(b.root);
    vector<int> right = rightSideView(b.root);
    cout<<"\nThe Left Side View Of The Binary Tree Is As Follows : \n";
    for (int ele : left) cout<<ele<<"  ";
    cout<<"\n\nThe Right Side View Of The Binary Tree Is As Follows : \n";
    for (int ele : right) cout<<ele<<"  ";
    cout<<"\n\n";
    system("pause");
}