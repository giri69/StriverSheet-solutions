#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node*next;
    Node*random;
    Node(int data)
    {
        val=data;
        next=NULL;
        random=NULL;
    }
};


class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node*temp=head;
        while(temp!=NULL)
        {
            Node*nn=new Node(temp->val);
            nn->next=temp->next;
            temp->next=nn;
            temp=temp->next->next;
        }
        temp=head;
        while(temp!=NULL)
        {
            if(temp->random)
             temp->next->random=temp->random->next;
            
            temp=temp->next->next;
        }
        Node*ans=new Node(0);
        Node*as=ans;
        temp=head;
        while(temp!=NULL)
        {
            as->next=temp->next;
            as=as->next;
            temp->next=temp->next->next;
            temp=temp->next;
        }
        return ans->next;
    }
};