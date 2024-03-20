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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int cnt = 0;
        ListNode* curr = list1;
        
        while  (cnt < a - 1) {
            curr = curr->next;

            cnt++;

        }
        
        ListNode* na = curr;
        while (cnt < b + 1) {
            curr = curr->next;
            cnt++;

        }
        
        ListNode* last = list2;
        while (last->next != NULL) {
            last = last->next;

        }
        last->next = curr;
        
        na->next = list2;
        return list1;   
    }
};
