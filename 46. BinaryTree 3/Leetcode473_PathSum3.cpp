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

    int maxLevel(treeNode *node) {
        if (!node) return 0;
        return 1 + max(maxLevel(node->left), maxLevel(node->right));
    }

    void displayLevel(treeNode *node, int n, int curLevel = 1, bool reverse = false) {
        if (!node) return;
        if (curLevel == n) {
            cout << node->val << "  ";
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

    treeNode *initializeBinaryTree(vector<int> &v) {
        queue<treeNode *> q;
        treeNode *node = new treeNode(v[0]);
        q.push(node);
        int i = 1, j = 2;
        while (!q.empty() && i < v.size()) {
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
};

void helper(treeNode* node, int target, long long sum, int& count){
    if (!node) return;
    sum += (long long)node->val;
    if (sum == (long long)target) count++;
    helper(node->left,target,sum,count);
    helper(node->right,target,sum,count);
}
int pathSum(treeNode* node, int target){
    if(!node) return 0;
    int count  = 0;
    helper(node,target,0,count);
    count += pathSum(node->left,target) + pathSum(node->right, target);
    return count;
}

int main(){
    vector<int> v = {5,4,8,11,INT_MIN,13,4,7,2,INT_MIN,INT_MIN,5,1};
    binaryTree b(v);
    cout<<"\nThe Binary Tree Is As Follows : \n";
    b.levelOrderTraversal();
    int target;
    cout<<"\nEnter The Value Of The Target Sum :  \n";
    cin>>target;
    int n = pathSum(b.root, target);
    cout<<"\nThe No Of Paths Having The Sum "<<target<<" Are : "<<n;
    cout<<"\n\n";
    system("pause");
}