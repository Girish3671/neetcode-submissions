class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> s1;
        unordered_map<char,int> s2;

        for(auto it:s){
            s1[it]++;
        }
        for(auto it:t){
            s2[it]++;
        }

        if(s1==s2) return true;
        else return false;
    }
};
