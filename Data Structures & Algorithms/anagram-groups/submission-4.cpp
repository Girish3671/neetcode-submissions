class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> out;
        unordered_map<string,vector<string>> anamap;
        for(auto i : strs){
            string temp=i;
            sort(temp.begin(),temp.end());
            anamap[temp].push_back(i);
        }
        for(auto i : anamap){
            out.push_back(i.second);
        }
        return out;
    }
};
