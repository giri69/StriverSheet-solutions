#include<bits/stdc++.h>
using namespace std;
class MinStack {
public:
int c=INT_MAX;
stack<pair< int,int>>q;
    MinStack() {}
    
    void push(int val) {
        int c = q.empty() ? val : min(val, q.top().second);
        q.push({val, c});
    }
    
    void pop() {
       q.pop();
    }
    
    int top() {
        return q.top().first;
    }
    
    int getMin() {
       return q.top().second;
    }
};
