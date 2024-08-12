#include "iostream"
#include "binaryTree"
using namespace std;

// Morris Traversal :
// Morris Traversal Is A Special Algorithm For In-Order Traversal With Space Complexity Of O(1).

void MorrisTraversal(treeNode* node){
    treeNode* curr = node;
    while(curr){
        if (curr->left){// Finding Predecessor
            treeNode* pred = curr->left;
            while (pred->right && pred->right!=curr) pred = pred->right;
            if (!pred->right){// Making Fake Connections.
                pred->right = curr;
                curr = curr->left;
            }
            else{// Unlinking if Predecessor's Right Is Current Node..
                pred->right = nullptr;
                cout<<curr->val<<"  ";
                curr = curr->right;
            }
        }
        else {// Visiting Current Node If Left Node Is Null.            
            cout<<curr->val<<"  ";
            curr = curr->right;
        }
    }
}

int main(){
    vector<int> v = {10,5,15,3,8,12,20,INT_MIN,INT_MIN,6,INT_MIN,INT_MIN,13};
    binaryTree b(v);
    cout<<"\n\nThe Given Binary Search tree Is As Follows : \n";
    b.displayTree();
    cout<<"\n\nThe Morris Traversal of the Given Binary Search Tree Is As Follows : \n";
    MorrisTraversal(b.root);
    cout<<"\n\n";
    system("pause");
}