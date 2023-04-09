#include <iostream>
#include <vector>
struct Node {
    int val;
    Node* left;
    Node* right;
};

Node* createNode(int value) {
    Node* new_node = new Node;
    new_node->val = value;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

void pre(Node* root) {
    if(root == NULL) return;
    std::cout<<root->val<<" ";
    pre(root->left);
    pre(root->right);
}

void in(Node* root) {
    if(root == NULL) return;
    in(root->left);
    std::cout<<root->val<<" ";
    in(root->right);
}

void post(Node* root) {
    if(root == NULL) return;
    post(root->left);
    post(root->right);
    std::cout<<root->val<<" ";
}

int i;
Node* f(std::vector<int> &pre) {
    i++;
    if(i >= pre.size()) return NULL;
    if(pre[i] == -1) return NULL;
    Node* root = createNode(pre[i]);
    root->left = f(pre);
    root->right = f(pre);
    return root;
}

Node* buildTree(std::vector<int> &pre) {
    i = -1;
    return f(pre);
}

int main() {
    int n;
    std::cin>>n;
    std::vector<int> preorder(n, 0);
    for(int i = 0; i < n; i++) {
        std::cin>>preorder[i];
    }
    Node* root = buildTree(preorder);
    pre(root);
    std::cout<<"\n";
    in(root);
    std::cout<<"\n";
    post(root);
    std::cout<<"\n";
    return 0;
}
// 1 2 -1 -1 3 4 6 -1 -1 -1 5 7 -1 9 -1 -1 8 -1 -1