1class Solution {
2public:
3    vector<int> asteroidCollision(vector<int>& ast) {
4        stack<int>st;
5
6     for(int i=0;i<ast.size();i++)   {
7        int curr=ast[i];
8        bool flag=true;
9        while(!st.empty()&&st.top()>0&&curr<0){
10            int sum=st.top()+curr;
11            if(sum<0){
12                st.pop();
13               
14            }
15            else if(sum>0){
16                flag=false;
17                break;
18            }else{
19                st.pop();
20                flag=false;
21                break;
22            }
23            // agr ast bach ghya ha to usy stack ma push kra do
24        
25        }
26       if(flag){
27            st.push(curr);
28        }
29
30     }
31      
32       
33        int size=st.size();
34         vector<int>res(size);
35        for(int a=size-1;a>=0;a--){
36            res[a]=st.top();
37            st.pop();
38        }
39        return res;
40
41    }
42};