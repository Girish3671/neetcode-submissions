class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mapy;
        vector<vector<string>> out;
        for(int i=0;i<strs.size();i++){
            string temp=strs[i];
            sort(temp.begin(),temp.end());
            mapy[temp].push_back(strs[i]);
        }
        for(auto it:mapy){
            out.push_back(it.second);
        }
        return out;
    }
};
