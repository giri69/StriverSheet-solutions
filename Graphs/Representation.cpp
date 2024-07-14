#include<bits/stdc++.h>
using namespace std;
 class Solutions {  
public:
   vector<vector<int>> printGraph(int V, vector<pair<int,int>>edges) {
       vector<vector<int>>arr(V);
       for(int i=0;i<edges.size();i++)
       {
           int one=edges[i].first;
           int two=edges[i].second;
           arr[one].push_back(two);
           arr[two].push_back(one);
       }
       return arr;
    }
    };

