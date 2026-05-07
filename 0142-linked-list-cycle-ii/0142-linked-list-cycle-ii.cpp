/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
       ListNode * detectCycle (ListNode * head) {
            if (head == NULL || head->next == NULL) return NULL;
        ListNode*Slow = head;
        ListNode*Fast = head;
        while(Fast!=NULL && Fast->next!=NULL) {
            Slow = Slow->next;
            Fast = Fast->next->next;
            if (Slow==Fast)
            break;
        }
        if (Fast == NULL || Fast->next== NULL)
        return NULL;
        ListNode*p = head;
        while(p!=Slow) {
            p = p->next;
            Slow = Slow->next;
        }
       return p;
    }
};