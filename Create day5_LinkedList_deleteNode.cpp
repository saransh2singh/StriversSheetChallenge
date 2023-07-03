class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode *del = node->next;
        node->val = node->next->val;
        node->next = node->next->next;
        delete(del);
    }
};
