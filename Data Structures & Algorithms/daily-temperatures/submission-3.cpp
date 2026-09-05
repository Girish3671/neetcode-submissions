class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size()-1;
        stack<int> st;
        vector<int> output(n+1,0);
        for(int i=0;i<=n;i++){
            while(!st.empty() && temperatures[i]>temperatures[st.top()]){
                int prev=st.top();
                st.pop();
                output[prev]=i-prev;
            }
            st.push(i);
        }
        return output;
    }
};
