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
class Solution {

    private :
    vector<int> ans;

public:

    void traversal(TreeNode * root){
        if(root==NULL)return;
        traversal(root->left);
        ans.push_back(root->val);
        traversal(root->right);
    }

    vector<int> inorderTraversal(TreeNode* root) {
        traversal(root);
        return ans;
    }
};