#include <iostream>
#include <stack>
 struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

class BSTIterator {
public:
    std::stack<TreeNode*> st;
    
    BSTIterator(TreeNode* root) {
        push_left(root);
    }
    
    int next() {
        TreeNode* curr = st.top();
        st.pop();
        push_left(curr->right);
        return curr->val;

        //return -1;
    }
    
    bool hasNext() {
        return !st.empty();
    }
    
    void push_left(TreeNode* root) {
        TreeNode* temp = root;
        while(temp != NULL) {
            st.push(temp);
            temp = temp->left;
        }
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */