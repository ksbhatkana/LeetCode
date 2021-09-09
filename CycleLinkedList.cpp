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
    bool hasCycle(ListNode *head) {
         ListNode *s1,*s2;
        if(head==NULL)
            return false;
        s1=head;
        s2=head;
        s1=s1->next;
        s2=s2->next;
        for(;s1!=NULL && s2!=NULL;)
        {
            s1=s1->next;
            s2=s2->next;
            if(s2!=NULL)
                s2=s2->next;
            else
                return false;
            if(s1==s2)
                return true;
        }
        return false;
    }
};
