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

    void inorder(TreeNode* root, set<int> & arr) {
        if(root == NULL) {
            return ;
        }

        if(root -> left) inorder(root -> left, arr);
        arr.insert(root -> val);
        if(root -> right) inorder(root -> right, arr);



    }
    int findSecondMinimumValue(TreeNode* root) {
        set<int> arr;
        inorder(root, arr);
        int ans = -1;

        if (arr.size() < 2) return -1;
        

        auto it = arr.begin();
        it++;
        return *it;

        
    }
};