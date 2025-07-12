class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int num: nums){
            freq[num]++;
        }
        int n=nums.size();
        vector<vector<int>> buckets(n+1);

        for(auto& [i,f]:freq){
            buckets[f].push_back(i);
        }

        vector<int>res;
        for(int i=n;i>=1 && res.size()<k;i--){
            for(int num: buckets[i]){
                res.push_back(num);
                if(res.size()==k) break;
            }
        }
        return res;
    }
};