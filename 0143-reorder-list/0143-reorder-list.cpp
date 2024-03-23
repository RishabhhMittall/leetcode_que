/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(NULL) {}
 *     ListNode(int x) : val(x), next(NULL) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode* head) {
        // if (head == NULL || head->next == NULL) return;
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != NULL && fast->next != NULL) {

            slow =slow->next;
            fast = fast->next->next;
        }

        ListNode* prev = NULL;
        ListNode* next = NULL;
        while (slow != NULL) {
            next = slow->next;
            slow->next = prev;
            prev = slow;
            slow = next;
        }

    
        ListNode* mid = head;
        ListNode* mid1 = prev; 
        while (mid1->next) {
            next = mid->next;
            prev = mid1->next;

            mid->next = mid1;
            mid1->next = next;
            
            mid = next;
            mid1 = prev;
        }
    }
};