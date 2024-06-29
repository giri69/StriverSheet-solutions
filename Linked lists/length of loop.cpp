#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
     Node* next;
};
int countNodesinLoop(struct Node *head)
 {
    struct Node *s = head, *f = head;
    int c = 0;
    
    while (f != NULL && f->next != NULL) {
        s = s->next;
        f = f->next->next;
        
        if (s == f) {  // loop detected
            // Counting nodes in the loop
            s = s->next;
            c++;
            while (s != f) {
                c++;
                s = s->next;
            }
            return c;
        }
    }
    
    return 0;  // no loop found
}