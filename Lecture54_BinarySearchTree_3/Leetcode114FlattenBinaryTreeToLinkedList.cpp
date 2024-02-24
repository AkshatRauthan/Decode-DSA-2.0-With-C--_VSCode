#include "iostream"
#include "binaryTree"
using namespace std;


void flattenRec(treeNode* &node){
    if (!node) return;
    flattenRec(node->left);
    flattenRec(node->right);
    treeNode* r = node->right;
    node->right = node->left;
    node->left = nullptr;
    treeNode* temp = node;
    while (temp->right) temp=temp->right;
    temp->right = r;
}

void flattenIte(treeNode* node){ // Morris Method
    if (!node) return;
    treeNode* curr = node;
    while (curr){
        if (curr->left){
            // Save Right
            treeNode* r = curr->right;
            curr->right = curr->left;
            // Saving Predecessor
            treeNode* pre = curr->left;
            while (pre->right) pre = pre->right;
            // Linking
            pre -> right = r;
            curr = curr->left;
        }
        else curr = curr->right;
    }
    for (treeNode* temp = node; temp->right; temp = temp->right) temp->left = nullptr;
}