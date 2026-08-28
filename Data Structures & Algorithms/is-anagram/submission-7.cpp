class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int> s1;
        unordered_map<int,int> t1;
        for(auto i:s){
            s1[i]++;
        }
        for(auto i:t){
            t1[i]++;
        }
        if(s1==t1){
            return true;
        }else{
            return false;
        }
    }
};
