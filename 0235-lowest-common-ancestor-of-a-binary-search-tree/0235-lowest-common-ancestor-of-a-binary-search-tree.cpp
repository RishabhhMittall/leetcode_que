/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:

    TreeNode* solve(TreeNode* root, TreeNode* p, TreeNode* q)  {

        while(root != NULL) {
            if(root == p) {
                return p;
            }
            if(root == q) {
                return q;
            }
            if(root -> val >= p -> val && root -> val <= q -> val) {
                return root;
            }
            else if(root -> val > p-> val && root -> val > q -> val) { 
                root = root -> left;
            }
            else {
                root = root -> right;
            }
            
        }
        return root;
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        if(p -> val == q -> val) {
            return p;
        }
         if(p->val > q->val) {
            swap(p, q); // ensure p <= q
        }

        TreeNode* ans = solve(root, p,q);
        return ans;
    }
};