#include <iostream>
#include <stack>
#include <vector>
using namespace std;
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */struct TreeNode {
int val;
TreeNode *left;
TreeNode *right;
TreeNode() : val(0), left(nullptr), right(nullptr) {}
TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        if(root == NULL) return std::vector<int>();
        std::stack<TreeNode*> st;
        std::vector<int> in;
        st.push(root);
        while(not st.empty()) {
            while(st.top()->left) {
                st.push(st.top()->left);
            }
            while(not st.empty() and st.top()->right == NULL) {
                in.push_back(st.top()->val);
                st.pop();
            }
            if(st.empty()) break;
            in.push_back(st.top()->val);
            TreeNode* curr = st.top();
            st.pop();
            st.push(curr->right);
        }
        return in;
    }
};