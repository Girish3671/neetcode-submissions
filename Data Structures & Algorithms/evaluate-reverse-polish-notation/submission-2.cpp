class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(auto it:tokens){
            
            if(it=="+"||it=="-"||it=="*"||it=="/"){
                    //operator
                int result;
                int first=st.top();
                st.pop();
                int second=st.top();
                st.pop();
                if(it=="+"){
                    result=first+second;
                }else if(it=="-"){
                    result=second-first;
                }else if(it=="*"){
                    result=first*second;
                }else{
                    result=second/first;
                }
                st.push(result);
            }
            //Not a operator
            else{
                st.push(stoi(it));
            }
            
        }
        return st.top();
    }
};
