1class Solution {
2public:
3    vector<int> asteroidCollision(vector<int>& asteroids) {
4        vector<int> st;
5        
6        for (int ast = 0; ast < asteroids.size(); ast++) {
7            int current = asteroids[ast];
8            bool destroyed = false;
9            while (!st.empty() && st.back() > 0 && current < 0) {
10                if (st.back() < -current) {
11                    st.pop_back();  
12                    continue;
13                } else if (st.back() == -current) {
14                    st.pop_back(); 
15                }
16                destroyed = true; 
17                break;
18            }
19            
20            // If the current asteroid survived, push it to the stack
21            if (!destroyed) {
22                st.push_back(current);
23            }
24        }
25        return st;
26    }
27};
28