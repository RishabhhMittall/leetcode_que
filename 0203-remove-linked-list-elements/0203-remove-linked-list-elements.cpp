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
    ListNode* deleteEle(ListNode* &head, int value) {

        

        //deleting head
        while (head != NULL && head->val == value) {
            ListNode* nodetodelete = head;
            head = head->next;
            delete nodetodelete;
        }

        ListNode* curr = head;
        ListNode* prev = NULL;
        
        while(curr != NULL) {
            
            if(curr -> val == value) {
            ListNode* nodetodelete = curr;
            prev ->next = curr -> next;
            curr = curr->next;
            delete(nodetodelete);

            }
            else {
                prev = curr;
            curr = curr-> next;
            }
        }
        return head;
    }
    ListNode* removeElements(ListNode* head, int val) {
        deleteEle(head, val);
        return head;
    }
};