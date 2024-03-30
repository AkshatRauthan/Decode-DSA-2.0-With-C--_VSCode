#include "iostream"
#include "vector"
#include "unordered_set"
using namespace std;

class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};

unordered_set<Node*> s;
void helper(Node* node, Node* &clone){
    if (s.find(node) != s.end()) return;
    clone->neighbors.clear();
    s.insert(node);
    for (auto x : node->neighbors){
        Node* next = new Node(x->val);
        clone->neighbors.push_back(next);
        helper(x, next);
    }
}
Node* cloneGraph(Node* node) {
    if (!node) return nullptr;
    Node* clone = new Node(node->val);
    helper(node, clone);
    return clone;
}