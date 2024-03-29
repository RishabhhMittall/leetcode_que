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
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {

//         // empty list
//         if(head == NULL || head -> next == NULL) {
//             return head;
//         }
//         ListNode* prev = NULL;
//         ListNode* curr = head;

//         while(curr != NULL) {
//             ListNode* fwd = NULL;
//             fwd = curr -> next;
//             curr -> next = prev; 
//             prev = curr;
//             curr = fwd;

//         }
//         return prev;
//     }
// };

// // ------ Approach 2 (Recursive)-------------

// class Solution {
// public:

//     // ListNode*

//     void solve(ListNode* &head,ListNode* curr,ListNode* prev){
//         if(curr == NULL) {
//             head = prev;
//             return;
//         }
//         ListNode* fwd = curr -> next;
//         curr -> next = prev;
//         solve(head,fwd,curr);
       

//     }

//     ListNode* reverseList(ListNode* head) {
//         ListNode* curr = head;
//         ListNode* prev = NULL;

//         solve(head, curr, prev);
//         return head;
//     }
// };

//------Approach 3 - recursion --------
class Solution {
public:

    ListNode* solve(ListNode* & head) {
        if(head == NULL || head -> next == NULL) {
            return head;
        }

        ListNode* chotahead = solve(head -> next) ;

        head -> next -> next = head;
        head -> next = NULL;

        return chotahead;

    }

    ListNode* reverseList(ListNode* head) {
        
        return solve(head);
    }
};