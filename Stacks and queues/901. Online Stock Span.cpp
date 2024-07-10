#include<bits/stdc++.h>
using namespace std;
class StockSpanner {
public:
stack<pair<int,int>>st;
    StockSpanner() {}
    
    int next(int price) {
       int c=1;
       while(!st.empty()&&st.top().first<=price)
       {
        c+=st.top().second;
        st.pop();
       }
       pair<int,int>p;
       p.first=price;
       p.second=c;
       st.push(p);
       return c;
    }
};
