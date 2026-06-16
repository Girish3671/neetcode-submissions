class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest=0;
        unordered_set<int> numset(nums.begin(),nums.end());

        for(int num:numset){
            if(numset.find(num-1)==numset.end()){
                int length=1;
                while(numset.find(num+length)!=numset.end()){
                    length++;
                }
                longest=max(length,longest);
            }
        }
        return longest;
    }
};
