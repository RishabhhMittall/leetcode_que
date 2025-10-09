/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

    ListNode* reverseLL(ListNode* head) {
        ListNode * prev = new ListNode(-1);
        ListNode * temp = head;
        ListNode * nex = head;

        while(temp != NULL) {
            nex = temp -> next;
            temp -> next = prev;
            prev = temp;
            temp = nex;
        }
        return prev;
    }

    vector<int> nextLargerNodes(ListNode* head) {
        ListNode* rev = reverseLL(head);

        stack<int> st;
        vector<int> ans;
        
        while(rev -> next != NULL) {
            while(!st.empty() && st.top() <= rev -> val) {
                st.pop();
            }
            if(st.empty()) {
                ans.push_back(0);
            }
            else {
                ans.push_back(st.top());
            }
            st.push(rev -> val);
            rev = rev -> next;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};