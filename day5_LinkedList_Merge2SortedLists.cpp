class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *curr1 = list1;
        ListNode *curr2 = list2;
        ListNode *dummy = new ListNode(-1);
        ListNode *temp = dummy;
        while(curr1 != NULL && curr2 != NULL){
            if(curr1->val < curr2->val){
            temp -> next = curr1;
            temp = temp -> next;
            curr1 = curr1 -> next;
            }
            else{
                temp -> next = curr2;
                temp = temp -> next;
                curr2 = curr2 -> next;
            }
        }
        if(curr1 == NULL){
            temp -> next = curr2;
        }
        else{
            temp -> next = curr1;
        }
        return dummy->next;
    }
};
