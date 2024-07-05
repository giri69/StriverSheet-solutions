#include<bits/stdc++.h>
using namespace std;
class ListNode{
    public:
    int val;
    ListNode*next;
};
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> ans;
        ListNode* prev = nullptr;
        ListNode* curr = head;
        int position = 0;
        
        while ( curr->next != nullptr) {
            if (prev != nullptr) {
                if ((curr->val > prev->val && curr->val > curr->next->val) || 
                    (curr->val < prev->val && curr->val < curr->next->val)) {
                    ans.push_back(position);
                }
            }
            prev = curr;
            curr = curr->next;
            position++;
        }
        
        if (ans.size() < 2) {
            return {-1, -1};
        }
        
        int minDistance = INT_MAX;
        int maxDistance = ans.back() - ans.front();
        
        for (int i = 1; i < ans.size(); i++) {
            minDistance = min(minDistance, ans[i] - ans[i - 1]);
        }
        
        return {minDistance, maxDistance};
    }
};