class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL || k == 0){
            return head;
        }
        int count = 1;
        ListNode *curr = head;
        while(curr->next != NULL){
            count++;
            curr = curr -> next ;
        }
        curr->next = head;
        k = k % count;
        int total = count - k;
        curr = head;
        for(int i=1 ; i<total ; i++){
            curr = curr -> next;
        }
        head = curr -> next;
        curr -> next = NULL;
        return head;
    }
};
