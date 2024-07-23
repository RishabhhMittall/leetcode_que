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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == nullptr) {
            return list2;
        }

        if(list2 == NULL) {
            return list1;
        }

        ListNode* small = list1;
        ListNode* large = list1 -> next;
        ListNode* curr = list2;

        while(curr != NULL) {
            if(small -> val <= curr -> val && large -> val >= curr -> val) {
                ListNode* temp = curr -> next;
                small -> next = curr;
                curr -> next = large;
                small = small -> next;
                curr = temp;
            }
            else {
                small = small -> next;
                large = large -> next;
            }
        }

        return list1;
    }
};