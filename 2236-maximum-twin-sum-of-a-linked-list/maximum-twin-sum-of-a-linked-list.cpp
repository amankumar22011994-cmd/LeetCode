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
    int pairSum(ListNode* head) {
        // middle 
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast !=NULL && fast->next !=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        // reverse
        ListNode* prev=NULL;
        while(slow!=NULL){
            ListNode* temp=slow->next;
            slow->next=prev;
            prev=slow;
            slow=temp;
        }
        int ans=0;
        while(prev !=NULL){
            int sum= head->val+prev->val;
            ans=max(ans,sum);
            head=head->next;
            prev=prev->next;
        }
        return ans;
    }
};