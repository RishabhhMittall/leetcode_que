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

    ListNode* deleteDups(ListNode* head) {

        if(head == NULL) {
            return NULL;
        }

        ListNode* curr = head;
        ListNode* prev = NULL;

        while(curr != NULL && curr -> next != NULL) {
            if(curr -> val == curr -> next -> val) {
                ListNode* temp = curr -> next;
                curr -> next = curr -> next -> next;
                delete temp;               
            }
            else {
                curr = curr -> next;
            }
        }

        return head;
    }

    ListNode* deleteDuplicates(ListNode* head) {
        return  deleteDups(head);
    }
};