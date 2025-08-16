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

    int findPosi(vector<int> in, int ele, int n) {

        for(int i = 0; i<n; i++) {
            if(in[i] == ele) {
                return i;
            }
        }
        return -1;
    }

    TreeNode* solve(vector<int> in, vector<int> pre ,int &preIdx,  int inStart, int inEnd ,int n) {

        if(preIdx >= n || inStart > inEnd) {
            return NULL; 
        }

        int ele = pre[preIdx++];
        TreeNode* root = new TreeNode(ele);
        int posi = findPosi(in , ele, n);

        root -> left = solve(in, pre, preIdx, inStart, posi - 1, n);
        root -> right = solve(in, pre, preIdx, posi + 1, inEnd, n);
        
        return root;
    }

    TreeNode* buildTree(vector<int>& pre, vector<int>& in) {

        int preIdx = 0;
        int n = in.size();

        TreeNode* root = solve(in, pre, preIdx, 0, n-1, n);
        return root;
        
    }
};