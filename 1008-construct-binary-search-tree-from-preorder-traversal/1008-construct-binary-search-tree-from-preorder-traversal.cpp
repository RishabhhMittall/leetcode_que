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
public:

    TreeNode* buildTree(TreeNode* root, int data) {
        if (root == nullptr) {
            return new TreeNode(data);
        }
        if(data > root -> val) {
            root -> right = buildTree(root -> right, data);
        }
        else {
            root -> left = buildTree(root -> left, data);

        }

        return root;
    }

    TreeNode* bstFromPreorder(vector<int>& preorder) {  

        TreeNode* root = new TreeNode (preorder[0]);

        for(int i = 1; i<preorder.size(); i++) {
            buildTree(root, preorder[i]);
        }
        return root;
    }
};