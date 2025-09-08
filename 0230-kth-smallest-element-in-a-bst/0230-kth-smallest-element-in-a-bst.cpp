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

    int solve(TreeNode* root, int & cnt, int k) {
        if(root == NULL) {
            return -1;
        }

        int left = solve(root -> left, cnt, k);
        if(left != -1) {
            return left;
        }

        cnt ++;
        if(cnt == k) {
            return root -> val;
        }
        return solve(root -> right, cnt, k);

    }

    int kthSmallest(TreeNode* root, int k) {

        int cnt = 0;
        int ans = solve(root, cnt, k);

        return ans;
    }
};

// class Solution {
// public:

//     vector<int> inorder(TreeNode* root, vector<int> &arr) {
//         if(root == NULL) {
//             return arr;
//         }

//         inorder(root -> left, arr);
//         arr.push_back(root -> val);
//         inorder(root -> right, arr);

//         return arr;
//     }

//     int kthSmallest(TreeNode* root, int k) {

//         vector<int> arr;
//         inorder(root, arr);

//         return arr[k-1];
        
//     }
// };