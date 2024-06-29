#include<bits/stdc++.h>
using namespace std;
//{ Driver Code Starts

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution
{
    public:
    Node* segregate(Node *head) {
        
    Node* z=new Node(-1);
    Node* o=new Node(-1);
    Node* t=new Node(-1);
    Node*ze=z;
    Node*on=o;
    Node*tw=t;
    Node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data==0)
        {
            ze->next=temp;
            ze=temp;
        }
        else if(temp->data==1)
        {
            on->next=temp;
            on=temp;
        }
        else if(temp->data==2)
        {
            tw->next=temp;
            tw=temp;
        }
        temp=temp->next;
    }
    if(on->data!=-1)ze->next=o->next;
    else ze->next=t->next;
    
    on->next=t->next;
    tw->next=NULL;
    
    return z->next;
        
    }
};


