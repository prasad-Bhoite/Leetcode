/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        
        // base case ...
        if(head==NULL || k==0)
        {
            return head;
        }

        //step A: Find the length and reach to the last node...
        ListNode* temp = head;
        int n=0;

        while(temp->next)
        {
            temp = temp->next;
            n++;//
        }

        temp->next = head; // pointing head to the last node...

        k = k%(n+1);

        int jump = n-k;


        temp = head;
        while(jump)
        {
            temp = temp->next;
            jump--;
        }

        ListNode* returnHead = temp->next;
        temp->next = NULL;

        return returnHead;
    }
};