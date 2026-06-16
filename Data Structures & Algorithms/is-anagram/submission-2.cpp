class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int> s1;
        unordered_map<int,int> t1;
        for(int num:s){
            s1[num]++;
        }
        for(int num:t){
            t1[num]++;
        }
        if(s1==t1){
            return true;
        }
        return false;
    }
};
