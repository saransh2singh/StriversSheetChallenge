class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *check = head;
        for(int i=1;i<=k;i++){
            if(check == NULL){
                return head;
            }
            check = check -> next;
        }
        ListNode *prev = NULL;
        ListNode *next = NULL;
        ListNode * curr = head;
        int count = 1;
        while(curr != NULL && count <= k){
            next = curr->next;
            curr -> next = prev;
            prev = curr;
            curr = next;
            count++;
        }
        if(next != NULL){
            ListNode *newHead = reverseKGroup(next,k);
            head->next = newHead;
        }
        return prev;
    }
};
