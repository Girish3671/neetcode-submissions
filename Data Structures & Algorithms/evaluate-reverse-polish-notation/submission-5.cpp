class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(auto it:tokens){
            if(it=="+" || it=="-" || it=="*" || it=="/"){
                //operator
               int first =st.top();
               st.pop();
               int second = st.top();
               st.pop();
               int output;
               if(it=="+"){
                    output=first+second;
               }else if(it=="-"){
                    output=second-first;
               }else if(it=="*"){
                    output=first*second;
               }else{
                    output=second/first;
               }
               st.push(output);
            }
            else{
                //number
                st.push(stoi(it));
            }
        }
        return st.top();
    }
};
