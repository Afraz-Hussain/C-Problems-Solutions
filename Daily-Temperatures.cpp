1class Solution {
2public:
3    vector<int> dailyTemperatures(vector<int>& temperatures) {
4        int n=temperatures.size();
5        vector<int>arr(n,0);
6        stack<int>st;
7        
8        for(int i=n-1;i>=0;i--){
9            while(!st.empty() && temperatures[i] >= temperatures[st.top()]){
10                st.pop();
11            }
12            if(!st.empty()){
13                arr[i]=st.top()-i;
14
15            }
16            st.push(i);
17        }
18        return arr;
19    }
20};