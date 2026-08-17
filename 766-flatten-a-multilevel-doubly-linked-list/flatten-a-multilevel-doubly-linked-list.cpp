/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/
class Solution {
public:
    Node* flatten(Node* head) {
        Node* temp = head;

        while(temp != NULL) {
            Node* t = temp->next;

            if(temp->child != NULL) {
                Node* c = flatten(temp->child);

                temp->next = c;
                c->prev = temp;

                // c ko aage le jaana
                while(c->next != NULL) {
                    c = c->next;
                }

                c->next = t;

                if(t != NULL) {
                    t->prev = c;
                }

                temp->child = NULL;
            }

            temp = temp->next;
        }

        return head;
    }
};