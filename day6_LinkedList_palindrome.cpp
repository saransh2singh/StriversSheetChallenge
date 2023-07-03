class Solution {
public:
    ListNode *middle(ListNode *head){
        if(head == NULL){
            return head;
        }
        ListNode *slow = head;
        ListNode *fast = head;
        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    ListNode *reversee(ListNode *head){
        ListNode *curr = head;
        ListNode *prev = NULL;
        ListNode *next;
        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode *mid = middle(head);
        ListNode *rev = reversee(mid->next);
        ListNode *curr = head;
        while(rev != NULL){
            if(curr->val != rev->val){
                return false;
            }
            curr = curr->next;
            rev = rev-> next;
        }
        return true;
    }
};
