class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> record;
        for(int i=0;i<nums.size();i++){
            int diff = target - nums[i];
            if (record.count(diff)){
                return {record[diff],i};
            }
            record[nums[i]] = i;
        }
        return{};
    }
};