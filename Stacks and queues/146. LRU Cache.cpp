#include<bits/stdc++.h>
using namespace std;
class LRUCache {
public:
class node{
    public:
    int key;
    int val;
    node*next;
    node*prev;
    node(int _key,int _val)
    {
        key=_key;
        val=_val;
    }
};
node* head=new node(-1,-1);
node* tail=new node(-1,-1);
  int c;
  unordered_map<int,node*>v;

    LRUCache(int capacity) {
       c=capacity;
       head->next=tail;
       tail->prev=head;
    }
    void addnode(node* newnode)
    {
        node*temp=head->next;
        newnode->next=temp;
        newnode->prev=head;
        head->next=newnode;
        temp->prev=newnode;

    }
    void deletenode(node* delnode)
    {
      node*delprev=delnode->prev;
      node*delnext=delnode->next;
      delprev->next=delnext;
      delnext->prev=delprev;
    }
    
    int get(int key_) {
        if(v.find(key_)!=v.end())
        {
           node*ans=v[key_];
           int res=ans->val;
           v.erase(key_);
           deletenode(ans);
           addnode(ans);
           v[key_]=head->next;
           return res;
        }
        else
        return -1;
    }
    
    void put(int key_, int value) {
        if(v.find(key_)!=v.end())
        {
           node*ans=v[key_];
           v.erase(key_);
           deletenode(ans);
        }
        if(v.size()==c)
        {
            v.erase(tail->prev->key);
            deletenode(tail->prev);
        }
        addnode(new node(key_,value));
        v[key_]=head->next;

    }
};

