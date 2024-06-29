#include<bits/stdc++.h>
using namespace std;
class ListNode{
    public:
    int val;
    ListNode*next;
};
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* fast = head, *slow=head;
        while(fast && fast->next){
            slow = slow -> next;
            fast = fast-> next -> next;
        }
    return slow;
    }
};