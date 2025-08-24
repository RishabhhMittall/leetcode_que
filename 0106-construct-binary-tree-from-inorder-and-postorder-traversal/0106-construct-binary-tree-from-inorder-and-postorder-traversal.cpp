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

    TreeNode* solve(vector<int>& inorder, vector<int>& postorder, int & posIdx, 
                    int inStart, int inEnd, int n, map<int, int> & mp) 
    {
        if(posIdx >= n || inStart > inEnd) {
            return NULL;
        }

        int ele = postorder[posIdx++];
        TreeNode* root = new TreeNode(ele);

        int posi = mp[ele];
        root -> left = solve(inorder, postorder,posIdx, inStart, posi - 1, n , mp);
        root -> right = solve(inorder, postorder, posIdx, posi + 1, inEnd, n , mp);
        return root;
    }
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        reverse(postorder.begin(), postorder.end());

        int posIdx = 0;
        int n = inorder.size();
        map<int, int> mp;
        for(int i = 0; i<n; i++) {
            mp[inorder[i]] = i;
        }

        return solve(inorder, postorder, posIdx, 0, n-1, n , mp);
    }
};