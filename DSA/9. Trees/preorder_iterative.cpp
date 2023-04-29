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
 */
struct TreeNode {
int val;
TreeNode *left;
TreeNode *right;
TreeNode() : val(0), left(nullptr), right(nullptr) {}
TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution {
public:
    
    vector<int> preorderTraversal(TreeNode* root) {
        if(root == NULL) return std::vector<int>();
        std::stack<TreeNode*> st;
        st.push(root);
        std::vector<int> result;
        while(not st.empty()) {
            TreeNode* curr = st.top();
            st.pop();
            result.push_back(curr->val);
            if(curr->right) {
                st.push(curr->right);
            }
            if(curr->left) {
                st.push(curr->left);
            }
        }
        return result;
    }
};