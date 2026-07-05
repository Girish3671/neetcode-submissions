class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> output;
        unordered_map<string,vector<string>> ana_temp;

        for(auto it:strs){
            string st=it;
            sort(st.begin(),st.end());
            ana_temp[st].push_back(it);
        }

        for(auto it:ana_temp){
            output.push_back(it.second);
        }
        return output;
        
    }
};
