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
        
        if(list1 == NULL || list2 == NULL){
            return list1 == NULL ? list2 : list1;
        }

        if(list1->val <= list2->val){
            list1->next = mergeTwoLists(list1->next, list2);
            return list1;
        }else{
            list2->next = mergeTwoLists(list1, list2->next);
            return list2;
        }
    }
};

// --- New Submission ---
public class Solution {
    public int ScoreOfString(string s) {
        
        Dictionary<char, int> alpha = new();
        
        int j = 97;
        for(char c = 'a'; c <= 'z'; c++){
            alpha[c] = j;
            j++;
        }

        int result = 0;
        for(int i = 0; i < s.Length - 1; i++){
            result += Math.Abs(alpha[s[i]] - alpha[s[i + 1]]);
        }

        return result;
    }
}