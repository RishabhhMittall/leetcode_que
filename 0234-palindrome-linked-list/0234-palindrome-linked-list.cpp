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
    ListNode* rev(ListNode* head) {
        ListNode *prev = NULL;
        ListNode *curr = head;
        ListNode *nxt = NULL;
        while (curr != NULL) {

            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if (head == NULL || head->next == NULL){
            return true;

        }    
        ListNode *s = head, *f = head;

        while (f->next != NULL && f->next->next != NULL) {

            s = s->next;
              f = f->next->next;
        }

        ListNode *prt2 = rev(s->next);

        ListNode *h1 = head;
        ListNode* h2 = prt2;
        while (h2 != NULL) {

            if (h1->val != h2->val){
                return false;
            }
            h1 = h1->next;
            h2 = h2->next;
        }

        return true;
    }
};