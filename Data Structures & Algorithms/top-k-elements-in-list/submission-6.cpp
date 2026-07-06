class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freqMap;
        vector<int>output;
        for(auto it:nums){
            freqMap[it]++;
        }
        int n=nums.size();
        vector<vector<int>> bucket(n+1);
        for(auto it:freqMap){
            bucket[it.second].push_back(it.first);
        }

        for(int i=bucket.size()-1;i>=0;i--){
            if(!bucket[i].empty() && k>0){
                for(int j=0;j<bucket[i].size();j++){
                   output.push_back(bucket[i][j]);
                   k--;
                }
            }
        
        }
        return output;
    }
};
