class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    if(head == NULL){
        return head;
    }
        ListNode *curr = head;
        int count = 0;
        while(curr != NULL){
            count++;
            curr = curr->next;
        }
        if(n > count){
            return head;
        }
        if(n == count){
            ListNode *temp = head;
            head = head->next;
            delete(temp);
            return head;
        }
        curr = head;
        int nNode = count - n;
        for(int i=0;i<nNode-1;i++){
            curr = curr->next;
        }
        ListNode *temp = curr -> next;
        curr -> next = curr -> next -> next;
        delete(temp);
        return head;
    }
};
