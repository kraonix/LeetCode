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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* curr1 = l1;
        ListNode* curr2 = l2;
        ListNode* l3 = new ListNode();
        ListNode* temp3 = l3;
        int carry = 0;

        int count1 = 0, count2 = 0;
        ListNode* prev1 = NULL;
        ListNode* prev2 = NULL;

        while(curr1 != NULL){
            prev1 = curr1;
            curr1 = curr1->next;
            count1++;
        }
        while(curr2 != NULL){
            prev2 = curr2;
            curr2 = curr2->next;
            count2++;
        }

        if(count1 > count2){
            curr1 = l1;
            prev1 = NULL;
            curr2 = l2;

            while(curr2 != NULL){
                prev1 = curr1;
                curr1 = curr1->next;
                curr2 = curr2->next;
            }

            while(prev1->next != NULL){
                ListNode* newNode = new ListNode(0);
                prev2->next = newNode;
                prev1 = prev1->next;
                prev2 = prev2->next;
            }
        }else{
            curr2 = l2;
            prev2 = NULL;
            curr1 = l1;

            while(curr1 != NULL){
                prev2 = curr2;
                curr2 = curr2->next;
                curr1 = curr1->next;
            }

            while(prev2->next != NULL){
                ListNode* newNode = new ListNode(0);
                prev1->next = newNode;
                prev2 = prev2->next;
                prev1 = prev1->next;
            }
        }


        curr1 = l1;
        curr2 = l2;
        while(curr1 != NULL && curr2 != NULL){
            int totalSum = curr1->val + curr2->val + carry;
            int digit = totalSum%10;
            carry = totalSum/10;

            ListNode* curr3 = new ListNode(digit);
    
            temp3->next = curr3;
            
            curr1 = curr1->next;
            curr2 = curr2->next;
            temp3 = temp3->next;
        }

        if(carry != 0){
            ListNode* last = new ListNode(carry);
            temp3->next = last;
            last->next = NULL;
        }
        return l3->next;
    }


    //  ListNode* dummyHead = new ListNode();
    //     ListNode* curr = dummyHead;
    //     int carry = 0;

    //     while (l1 != NULL || l2 != NULL || carry != 0) {
    //         int sum = carry;
    //         if (l1 != NULL) {
    //             sum += l1->val;
    //             l1 = l1->next;
    //         }
    //         if (l2 != NULL) {
    //             sum += l2->val;
    //             l2 = l2->next;
    //         }
            
    //         carry = sum / 10;
    //         curr->next = new ListNode(sum % 10);
    //         curr = curr->next;
    //     }

    //     return dummyHead->next;
};