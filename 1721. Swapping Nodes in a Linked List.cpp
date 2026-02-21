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
    ListNode* swapNodes(ListNode* head, int k) {
        int n = 0;
        ListNode* curr = head;
        while(curr){
            n++;
            curr = curr->next;
        }
        ListNode* first = head;
        ListNode* second = head;
        
        int temp = 1;
        while(first){
            if(temp == k){
                temp = 1;
                break;
            }
            first = first->next;
            temp++;
        }

        while(second){
            if(temp == n - k + 1){
                temp = 1;
                break;
            }
            second = second ->next;
            temp++;
        }

        swap(first->val, second->val);
        return head;
    }
};