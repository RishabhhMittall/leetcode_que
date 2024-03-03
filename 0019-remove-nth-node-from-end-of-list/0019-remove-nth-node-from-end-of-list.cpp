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
    int length(ListNode* head){
        ListNode* temp = head;
        int cnt = 0;

        while(temp != NULL){
            temp=temp->next;
            cnt++;
        }


        return cnt;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = length(head);
        int ele = size-n;
        int cnt = 0;

        ListNode* temp = new ListNode();
        temp->next = head;

        ListNode* prev = temp;
        ListNode* curr = head;

        while(cnt < ele){
            prev = curr;
            curr = curr->next;
            cnt ++;
        }
        prev->next = curr->next;
        curr->next = NULL;

        return temp->next;
    }
};