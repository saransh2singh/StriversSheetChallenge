class Solution {
public:
    
    void copyList(Node *head){
        Node *temp = head;
        Node *nextt = temp->next;
        while(temp){
        Node *copy = new Node(temp->val);
        temp->next = copy;
        copy -> next = nextt;
        temp = nextt;
            if(nextt != NULL){
                nextt = temp->next;
            }
        }
    }
    
    void handleRandom(Node *head){
        Node *temp = head;
        while(temp){
            if(temp->random){
            temp->next->random = temp->random->next;
            }
            temp = temp->next->next;
        }
    }
    
    Node *detach(Node *head){
        Node *temp = head;
        Node *dummy = new Node(-1);
        Node *tail = dummy;
        while(temp){
            tail->next = temp->next;
            tail = tail->next;
            temp->next = tail->next;
            temp = temp->next;
        }
        return dummy->next;
    }
    
    Node* copyRandomList(Node* head) {
        if(head == NULL){
            return head;
        }
        copyList(head);
        handleRandom(head);
        return detach(head);
    }
};
