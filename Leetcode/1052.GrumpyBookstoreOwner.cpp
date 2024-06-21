#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int z = 0;  // z: satisfied customers without grumpy effect
        int nz = 0; // nz: maximum additional satisfied customers due to grumpy effect
        int x = 0;  // x: temporary variable to calculate current additional satisfied customers
        
        for (int i = 0; i < customers.size(); ++i) {
            if (grumpy[i] == 0) {
                z += customers[i];
            }
            
            if (i < minutes) {
                if (grumpy[i] == 1) {
                    x += customers[i];
                } else {
                    x += 0;
                }
            } else {
                if (grumpy[i] == 1) {
                    x += customers[i];
                }
                if (grumpy[i - minutes] == 1) {
                    x -= customers[i - minutes];
                }
            }
            
            nz = max(nz, x);
        }
        
        return z + nz;
    }
};
