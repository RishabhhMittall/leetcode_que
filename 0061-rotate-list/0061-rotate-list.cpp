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
    ListNode* rotateRight(ListNode* head, int k) {

        if(head == NULL || head -> next == NULL) {
            return head;
        }

        ListNode* temp = head;
        int len = 1 ; 
        while(temp -> next != NULL) {
            len ++;
            temp = temp -> next;
        }

        k = k % len;

        if(k == 0) return head;

        int cnt = 1;
        temp = head;
        while(cnt < len - k) {
            temp = temp -> next;
            cnt ++;
        }

        ListNode* store = temp -> next;
        temp -> next = NULL;

        ListNode* temp2 = store;
        while(temp2 -> next != NULL) {
            temp2 = temp2 -> next;
        }

        temp2 -> next = head;
        head = store;

        return head;
        
    }
};