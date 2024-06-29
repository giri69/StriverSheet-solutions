#include<bits/stdc++.h>
using namespace std;
class ListNode{
    public:
    int val;
    ListNode*next;
};
class Solution {
public:
    ListNode*f(ListNode* head)
    {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        ListNode* newh=f(head->next);
        ListNode*front=head->next;
        front->next=head;
        head->next=NULL;
        return newh;
    }
     ListNode* reverseList(ListNode* head) {
        return f(head);
    }
};