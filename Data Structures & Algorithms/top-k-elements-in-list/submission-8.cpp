class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freqmap;
        vector<int> out;
        for(auto it:nums){
            freqmap[it]++;
        }
        vector<vector<int>> bucket(nums.size()+1);
        for(auto it:freqmap){
            bucket[it.second].push_back(it.first);
        }
        for(int i=nums.size();i>=0;i--){
            if(!bucket[i].empty()){
                for(int j=0;j<bucket[i].size();j++){
                    if(k>0){
                        out.push_back(bucket[i][j]);
                        k--;
                    }
                    
                }
            }
        }
        return out;

        

    }
};
