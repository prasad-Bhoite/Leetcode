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

    int getLength(ListNode* head)
    {
        ListNode* temp = head;
        int len = 0;
        while(temp!=NULL)
        {
            temp = temp->next;
            len++;
        }
            return len;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {


        //empty wala case..
        if(head==NULL)
        {
            return NULL;
        }

        //not empty case ...
        int len = getLength(head);
        if( k > len)
        {
            return head;
        }

        //it means number of nodes in LL is >=k 

        //Step A: Reverse first k node in the LL...
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* forward = curr->next;

        int count = 0;
        while(count < k)
        {
                forward = curr->next;
                curr->next = prev;
                prev = curr;
                curr = forward;
                count++;
        }

    //Step B : Recursive call..
        if(forward!=NULL)
        {
             // we have still nodes remaining...
              head->next = reverseKGroup(forward,k);
        }
    
    //step C: return head of the modified LL...
    return prev;
        
    }
};