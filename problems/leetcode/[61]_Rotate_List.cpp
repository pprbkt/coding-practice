class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;

        int length = 0;
        ListNode* temp = head;
        while (temp) {
            length++;
            temp = temp->next;
        }

        k = k % length;
        if (k == 0) return head;

        ListNode* fast = head;
        ListNode* slow = head;

        for (int i = 0; i < k; ++i) {
            fast = fast->next;
        }
        while (fast->next) {
            fast = fast->next;
            slow = slow->next;
        }
        ListNode* newHead = slow->next; 
        slow->next = nullptr;           
        fast->next = head;             

        return newHead;
    }
};