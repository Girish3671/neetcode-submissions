class Solution {
public:
    bool isPalindrome(string s) {
        int l=0,r=s.size()-1;
        while(l<r){
            if(!alnum(s[l])){
                l++;
                continue;
            }
            if(!alnum(s[r])){
                r--;
                continue;
            }
            if(tolower(s[l])!=tolower(s[r])){
                return 0;
            }else{
                l++;
                r--;
            }
        }
        return 1;
    }
    bool alnum(char c){
        return (c>='A' && c<='Z' || c>='a' && c<='z' || c>='0' && c<='9');
    }
};
