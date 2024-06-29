#include<bits/stdc++.h>
using namespace std;
class ListNode{
    public:
    int val;
    ListNode*next;
};
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL||head->next==NULL||k==0)return head;
        ListNode*temp=head;int c=1;
        while(temp->next)
        {
            c++;
            temp=temp->next;
        }
        temp->next=head;
        k=k%c;k=c-k;
        for(int i=0;i<k;i++)
        {
            temp=temp->next;
        }
        head=temp->next;
        temp->next=NULL;
        return head;
    }
};