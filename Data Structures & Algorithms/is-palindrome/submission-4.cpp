class Solution {
public:
    bool isPalindrome(string s) {
        int left=0, right=s.size()-1;
        while(left<=right){
            if(!alnum(s[left])){
                left++;
                continue;
            }
            if(!alnum(s[right])){
                right--;
                continue;
            }
            if(tolower(s[left])!=tolower(s[right])){
                return false;
            }else{
                left++;
                right--;
            }
        }
        return true;
    }
    bool alnum(char c){
        return(c>='A' && c<='Z' || c>='a' && c<='z' || c>='0' && c<='9');
    }
};
