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

    TreeNode* LOT(TreeNode* root, map<TreeNode*, TreeNode*> & mp, int start) {

        queue<TreeNode*> q;
        q.push(root);
        TreeNode* res = NULL;

        while(!q.empty()) {
            TreeNode* frontNode = q.front();
            q.pop();

            if(frontNode -> val == start) {
                res = frontNode;
            }
            if(frontNode -> left != NULL) {
                mp[frontNode -> left ] = frontNode;
                q.push(frontNode -> left);
            }
            if(frontNode -> right != NULL) {
                mp[frontNode -> right ] = frontNode;
                q.push(frontNode -> right);
            }
        }
        return res;

    }


    void burnTree(TreeNode* root, int &ans , map<TreeNode*, TreeNode*> & mp) {
        
        map<TreeNode*, bool> visited;
        queue<TreeNode*> q;

        q.push(root);
        visited[root] = true;

        while(!q.empty()) {

            bool flag = false;
            int size = q.size();

            for(int i = 0; i<size; i++) {
                //process neighbours

                TreeNode* front = q.front();
                q.pop();

                if(front -> left != NULL && visited[front -> left] == false) {
                    flag = true;
                    q.push(front -> left);
                    visited[front -> left] = true;
                }
                if(front -> right != NULL && visited[front -> right] == false) {
                    flag = true;
                    q.push(front -> right);
                    visited[front -> right] = true;
                }
                if(mp[front] != NULL && visited[mp[front]] == false) {
                    flag = true;
                    q.push(mp[front]);
                    visited[mp[front]] = true;
                }
            }

            if(flag) {
                cout << ans << " ";
                ans++;
            }
        }
    }


    int amountOfTime(TreeNode* root, int start) {
        map<TreeNode*, TreeNode*> mp;
        mp[root] = NULL;
        TreeNode* target = LOT(root, mp, start); // have the map

        int ans = 0;
        burnTree(target, ans, mp);

        return ans;

        

    }
};