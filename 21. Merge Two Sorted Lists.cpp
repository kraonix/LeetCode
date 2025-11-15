/**
Â *Â DefinitionÂ forÂ singly-linkedÂ list.
Â *Â structÂ ListNodeÂ {
Â *Â Â Â Â Â intÂ val;
Â *Â Â Â Â Â ListNodeÂ *next;
Â *Â Â Â Â Â ListNode()Â :Â val(0),Â next(nullptr)Â {}
Â *Â Â Â Â Â ListNode(intÂ x)Â :Â val(x),Â next(nullptr)Â {}
Â *Â Â Â Â Â ListNode(intÂ x,Â ListNodeÂ *next)Â :Â val(x),Â next(next)Â {}
Â *Â };
Â */
classÂ SolutionÂ {
public:
Â Â Â Â ListNode*Â mergeTwoLists(ListNode*Â list1,Â ListNode*Â list2)Â {
Â Â Â Â Â Â Â Â 
Â Â Â Â Â Â Â Â if(list1Â ==Â NULLÂ ||Â list2Â ==Â NULL){
Â Â Â Â Â Â Â Â Â Â Â Â returnÂ list1Â ==Â NULLÂ ?Â list2Â :Â list1;
Â Â Â Â Â Â Â Â }

Â Â Â Â Â Â Â Â if(list1->valÂ <=Â list2->val){
Â Â Â Â Â Â Â Â Â Â Â Â list1->nextÂ =Â mergeTwoLists(list1->next,Â list2);
Â Â Â Â Â Â Â Â Â Â Â Â returnÂ list1;
Â Â Â Â Â Â Â Â }else{


// --- New Submission ---
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        if(list1 == NULL || list2 == NULL){
            return list1 == NULL ? list2 : list1;
        }

        if(list1->val <= list2->val){
            list1->next = mergeTwoLists(list1->next, list2);
            return list1;
        }else{
