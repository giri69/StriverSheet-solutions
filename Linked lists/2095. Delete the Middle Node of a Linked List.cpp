#include<bits/stdc++.h>
using namespace std;    
class ListNode{
    public:
    int val;
    ListNode*next;
};
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL||head->next==NULL)return NULL;
        ListNode*f=head,*s=head;
        f=f->next->next;
        while(f!=NULL&&f->next!=NULL)
        {
            f=f->next->next;
            s=s->next;
        }
        s->next=s->next->next;
        return head;
    }
};