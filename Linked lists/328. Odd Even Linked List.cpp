#include<bits/stdc++.h>
using namespace std;
class ListNode{
    public:
    int val;
    ListNode* next;
};
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL||head->next==NULL)return head;
        ListNode*f1=head,*f2=head->next,*c=f2;
        while(f2!=NULL&&f2->next!=NULL)
        {
            f1->next=f1->next->next;
            f1=f1->next;
            f2->next=f2->next->next;
            f2=f2->next;
        }
        f1->next=c;
      return head;
    }
};