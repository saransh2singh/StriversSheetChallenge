class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *a = headA;
        ListNode *b = headB;
         while ( a != b){
             if(a == NULL){
                 a = headB;
             }
             else if( b == NULL ){
                 b = headA;
             }
             else{
                 a = a -> next;
                 b = b -> next;
             }
         }
        return a;
    }
};
