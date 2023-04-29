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
         std::stack<std::pair<TreeNode*, int> > st;
        std::vector<int> pre;
        std::vector<int> in;
        std::vector<int> post;
        st.push({root, 0});
        while(not st.empty()) {
            // std::pair<TreeNode*, int> curr = st.top();
            if(st.top().first == NULL) {
                st.pop();
                continue;
            }
            st.top().second++;
            if(st.top().second == 1) {
                pre.push_back(st.top().first->val);
                st.push({st.top().first->left, 0});
            } else if(st.top().second == 2) {
                in.push_back(st.top().first->val);
                st.push({st.top().first->right, 0});
            } else {
                post.push_back(st.top().first->val);
                st.pop();
            }
        }
        return pre;
    }
};