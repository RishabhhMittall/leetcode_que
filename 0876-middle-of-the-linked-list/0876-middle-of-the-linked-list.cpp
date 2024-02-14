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
//     ListNode* middleNode(ListNode* head) {
//         int cnt = 0;
//         ListNode* temp = head;
//         while(temp != NULL) {
//             cnt++;
//             temp = temp -> next;
//         }
//         // if(cnt % 2 == 0){
//             cnt = (cnt/2);
//             ListNode* one = head;
//             while(cnt != 0){
//                 one = one -> next;
//                 cnt--;
//             }
//             return one;
//         // }
//         // else{
//         //     cnt = (cnt/2);
//         //     ListNode* one = head;
//         //     while(cnt != 0){
//         //         one = one -> next;
//         //         cnt--;
//         //     }
//         //     return one;

//         // }
//         return head;
//     }
// };


//--- approach 2 khiladi ---
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
    
        ListNode * one = head;
        ListNode * two = head;

        while(one != NULL && one -> next != NULL){
            one = one -> next -> next;
            two = two -> next;
        }

        return two;

    }
};        