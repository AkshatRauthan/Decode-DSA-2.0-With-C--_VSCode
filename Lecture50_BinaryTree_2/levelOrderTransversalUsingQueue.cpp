#include "iostream"
#include "queue"
using namespace std;

/*                            Basic Algorithm For BFS Using Queues :-

  STEP 1 : Make A Queue Of treeNode* Datatype And Push The Root Node In It.
  STEP 2 : Now Perform The Following Steps :-
  STEP 3 : If The Queue Is Not Empty Then Node* temp = q.front() And q.pop().
  STEP 4 : Print temp->val.
  STEP 5 : Push temp->left And temp->right If They Exist.
  STEP 6 : Again Go To Step 3.

*/

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
    cout<<"\nThe Level Order Traversal Of The Binary Tree Is As Follows : \n";
    t.levelOrderTraversal();
    cout<<"\n\nThe Reverse Level Order Traversal Of The Binary Tree Is As Follows : \n";
    t.levelOrderTraversal(true);
    cout<<"\n\n";
    system("pause");
}
